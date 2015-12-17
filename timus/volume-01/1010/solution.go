package main

import (
	"bufio"
	"fmt"
	"os"
)

func abs(x int64) int64 {
	if x < 0 {
		return -x
	}
	return x
}

func main() {
	bi := bufio.NewReader(os.Stdin)
	bo := bufio.NewWriter(os.Stdout)
	defer bo.Flush()

	var n, prev int
	fmt.Fscanln(bi, &n)

	best_n := 1
	var best_d int64

	fmt.Fscanln(bi, &prev)
	for i := 1; i < n; i++ {
		var v int
		fmt.Fscanln(bi, &v)
		d := abs(int64(v) - int64(prev))

		if d >= best_d {
			best_n = i
			best_d = d
		}

		prev = v
	}

	fmt.Fprintln(bo, best_n, best_n+1)
}
