package main

import (
	"bufio"
	"fmt"
	"os"
)

// BellmanвЂ“Ford

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

	d := make([]int, n)
	for i := 0; i < n; i++ {
		d[i] = INF
	}
	for i := 0; i < k; i++ {
		var e int
		fmt.Fscan(bi, &e)
		d[e-1] = 0
	}

	a := make([][]int, n)
	for i := 0; i < n; i++ {
		a[i] = make([]int, n)
		for j := 0; j < n; j++ {
			fmt.Fscan(bi, &a[i][j])
		}
	}

	prev := make([]int, n)
	for i := 0; i < n; i++ {
		prev[i] = i
	}

	changed := true

	for changed {
		changed = false

		for i := 0; i < n; i++ {
			for j := 0; j < n; j++ {
				if d[i]+a[i][j] < d[j] {
					d[j] = d[i] + a[i][j]
					prev[j] = i
					changed = true
				}
			}
		}

	}

	res := 0
	for i := 0; i < n; i++ {
		res += a[prev[i]][i]
	}
	fmt.Fprintln(bo, "====")
	fmt.Fprintln(bo, d)
	fmt.Fprintln(bo, prev)
	fmt.Fprintln(bo, res)
}
