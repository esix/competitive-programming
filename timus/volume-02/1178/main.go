package main

import (
	"bufio"
	"fmt"
	"os"
	"sort"
)

type point struct {
	x, y, idx int
}

type points_by_y []point

func (a points_by_y) Len() int           { return len(a) }
func (a points_by_y) Swap(i, j int)      { a[i], a[j] = a[j], a[i] }
func (a points_by_y) Less(i, j int) bool { return a[i].y < a[j].y }

func main() {
	bi := bufio.NewReader(os.Stdin)
	bo := bufio.NewWriter(os.Stdout)
	defer bo.Flush()

	var n int
	fmt.Fscanln(bi, &n)

	ps := make([]point, n)

	for i := 0; i < n; i++ {
		fmt.Fscanln(bi, &ps[i].x, &ps[i].y)
		ps[i].idx = i + 1
	}

	sort.Sort(points_by_y(ps))

	for i := 0; i < n; i += 2 {
		fmt.Fprintln(bo, ps[i].idx, ps[i+1].idx)
	}

}
