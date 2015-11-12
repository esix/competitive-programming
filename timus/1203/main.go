//
// TLE 16
//

package main

import (
	"bufio"
	"fmt"
	"os"
	"sort"
)

type Lecture struct {
	S, E int
}

func (l Lecture) HasPoint(p int) bool {
	return l.S <= p && p <= l.E
}

func (l Lecture) Intersect(r Lecture) bool {
	return l.HasPoint(r.S) || l.HasPoint(r.E) || r.HasPoint(l.S) || r.HasPoint(l.E)
}

type Lectures []Lecture

func (slice Lectures) Len() int {
	return len(slice)
}

func (slice Lectures) Less(i, j int) bool {
	if slice[i].E < slice[j].E {
		return true
	}
	if slice[i].E > slice[j].E {
		return false
	}
	return slice[i].S < slice[j].S
}

func (slice Lectures) Swap(i, j int) {
	slice[i], slice[j] = slice[j], slice[i]
}

func max(a, b int) int {
	if a > b {
		return a
	}
	return b
}

func main() {
	bi := bufio.NewReader(os.Stdin)
	bo := bufio.NewWriter(os.Stdout)

	var n int
	fmt.Fscanln(bi, &n)

	ls := make(Lectures, n)

	for i := 0; i < n; i++ {
		fmt.Fscanln(bi, &ls[i].S, &ls[i].E)
	}

	sort.Sort(ls)

	res := 0
	min_time := 0

	for _, l := range ls {
		if l.S > min_time {
			min_time = l.E
			res++
		}
	}

	fmt.Fprintln(bo, res)
	bo.Flush()
}
