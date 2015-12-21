package main

import (
	"bufio"
	"fmt"
	"os"
)

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

	var n int
	fmt.Fscanln(bi, &n)

	score := make([]int, 1)
	score[0] = 0

	for level := 1; level <= n; level++ {
		var n int
		fmt.Fscanln(bi, &n)
		new_score := make([]int, n)
		for i := range new_score {
			new_score[i] = 1000000
		}

		for to := 0; to < n; to++ {
			for {
				var from int
				fmt.Fscan(bi, &from)
				if from == 0 {
					break
				}
				from--
				var cost int
				fmt.Fscan(bi, &cost)
				new_score[to] = min(new_score[to], score[from]+cost)
			}
			fmt.Fscanln(bi)
		}
		var s string
		fmt.Fscanln(bi, &s)
		score = new_score
	}

	res := score[0]
	for _, s := range score {
		res = min(res, s)
	}

	fmt.Fprintln(bo, res)
}
