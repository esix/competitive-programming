package main

import (
	"bufio"
	"fmt"
	"os"
	"sort"
)

func min(a, b int) int {
	if a < b {
		return a
	}
	return b
}

func sum(a []int) int {
	res := 0
	for _, v := range a {
		res += v
	}
	return res
}

func main() {
	bi := bufio.NewReader(os.Stdin)
	bo := bufio.NewWriter(os.Stdout)
	defer bo.Flush()

	var n, m int
	fmt.Fscanln(bi, &n, &m)

	g := make([]int, n)
	for i := range g {
		fmt.Fscan(bi, &g[i])
	}

	b := make([]int, m)
	for i := range b {
		fmt.Fscan(bi, &b[i])
	}

	sort.Ints(g)
	sort.Ints(b)

	res := sum(g) // no one takes

	for k := 1; k <= min(len(b), len(g)); k++ {
		new_res := sum(g[:len(g)-k]) + sum(b[:len(b)-k])*k
		if new_res < res {
			res = new_res
		}
	}

	fmt.Fprintln(bo, res)
}
