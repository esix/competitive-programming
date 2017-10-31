package main

import (
	"bufio"
	"fmt"
	"os"
)

// Prim's algorithm

func min(a, b int) int {
	if a < b {
		return a
	}
	return b
}

func main() {
	bi := bufio.NewReader(os.Stdin)
	bo := bufio.NewWriter(os.Stdout)
	defer bo.Flush()

	var n, k int
	fmt.Fscanln(bi, &n, &k)

	const INF = 1000000000

	// graph matrix (+special vertex 0)
	g := make([][]int, n+1)
	for i := range g {
		g[i] = make([]int, n+1)
		for j := range g[i] {
			g[i][j] = INF
		}
	}

	// read start nodes
	for i := 0; i < k; i++ {
		var s_node int
		fmt.Fscan(bi, &s_node)
		g[0][s_node] = 0
		g[s_node][0] = 0
	}

	// read weights
	for i := 1; i <= n; i++ {
		for j := 1; j <= n; j++ {
			fmt.Fscan(bi, &g[i][j])
			if i == j {
				g[i][j] = INF
			}
		}
	}

	// start
	used := make([]bool, n+1)
	min_e := make([]int, n+1)
	sel_e := make([]int, n+1)
	res := 0

	for i := 0; i <= n; i++ {
		min_e[i] = INF
		sel_e[i] = -1
	}

	min_e[0] = 0
	for i := 0; i <= n; i++ {
		v := -1
		for j := 0; j <= n; j++ {
			if !used[j] && (v == -1 || min_e[j] < min_e[v]) {
				v = j
			}
		}

		used[v] = true

		if sel_e[v] != -1 {
			//fmt.Fprintln(bo, v, sel_e[v])
			res += g[sel_e[v]][v]
		}

		for to := 0; to <= n; to++ {
			if g[v][to] < min_e[to] {
				min_e[to] = g[v][to]
				sel_e[to] = v
			}
		}
	}

	fmt.Fprintln(bo, res)
}
