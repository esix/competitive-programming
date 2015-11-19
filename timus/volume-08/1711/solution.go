package main

import (
	"bufio"
	"fmt"
	"os"
	"sort"
	"strings"
)

func main() {
	bi := bufio.NewReader(os.Stdin)
	bo := bufio.NewWriter(os.Stdout)

	var n int
	fmt.Fscanln(bi, &n)

	a := make([][]string, n)

	for i := 0; i < n; i++ {
		line, _, _ := bi.ReadLine()
		s := string(line)
		ss := strings.Split(s, " ")
		sort.Strings(ss)
		a[i] = ss
	}

	b := make([][]string, n)
	for i := 0; i < n; i++ {
		var k int
		fmt.Fscan(bi, &k)
		b[i] = a[k-1]
	}

	res := make([]string, n)
	s := ""
	for i := 0; i < n; i++ {
		var j int
		for j = 0; j < 3; j++ {
			if b[i][j] > s {
				break
			}
		}
		if j == 3 {
			fmt.Fprintln(bo, "IMPOSSIBLE")
			bo.Flush()
			return
		}
		res[i] = b[i][j]
		s = b[i][j]
	}

	for i := 0; i < n; i++ {
		fmt.Fprintln(bo, res[i])
	}

	bo.Flush()
}
