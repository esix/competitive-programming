package main

import (
	"bufio"
	"fmt"
	"os"
	"regexp"
	"sort"
	"strconv"
)

type sportsman struct {
	name      string
	mm, ss, d int
	offset    int
}

func (a *sportsman) finish_time() int {
	return a.mm*600 + a.ss*10 + a.d + a.offset*10
}

func (a *sportsman) move_time() int {
	return a.mm*600 + a.ss*10 + a.d
}

type by_finish_time []sportsman

func (a by_finish_time) Len() int      { return len(a) }
func (a by_finish_time) Swap(i, j int) { a[i], a[j] = a[j], a[i] }
func (a by_finish_time) Less(i, j int) bool {
	return a[i].finish_time() < a[j].finish_time()
}

type by_name []sportsman

func (a by_name) Len() int           { return len(a) }
func (a by_name) Swap(i, j int)      { a[i], a[j] = a[j], a[i] }
func (a by_name) Less(i, j int) bool { return a[i].name < a[j].name }

func main() {
	bi := bufio.NewReader(os.Stdin)
	bo := bufio.NewWriter(os.Stdout)
	defer bo.Flush()

	var n int
	fmt.Fscanln(bi, &n)

	ss := make([]sportsman, n)

	re := regexp.MustCompile(`^(\w+) (\d+):(\d+)\.(\d+)`)

	for i := 0; i < n; i++ {
		s, _ := bi.ReadString('\n')
		match := re.FindStringSubmatch(s)
		ss[i].name = match[1]
		ss[i].mm, _ = strconv.Atoi(match[2])
		ss[i].ss, _ = strconv.Atoi(match[3])
		ss[i].d, _ = strconv.Atoi(match[4])
		ss[i].offset = i * 30
	}

	sort.Sort(by_finish_time(ss))

	res := make([]sportsman, 0)

	for _, s := range ss {
		if len(res) == 0 || s.move_time() < res[len(res)-1].move_time() {
			res = append(res, s)
		}
	}

	sort.Sort(by_name(res))

	fmt.Fprintln(bo, len(res))
	for _, s := range res {
		fmt.Fprintln(bo, s.name)
	}
}
