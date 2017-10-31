package main

import (
	"fmt"
)

var d [5][5]int

func isIn(a int, list []int) bool {
	for _, b := range list {
		if b == a {
			return true
		}
	}
	return false
}

func append(l []int, v int) []int {
	n := make([]int, len(l)+1)
	copy(n, l)
	n[len(l)] = v
	return n
}

func solve(prev []int) (int, []int) {
	ordinal := len(prev)
	prevIdx := prev[len(prev)-1]

	if ordinal == 4 {
		return d[prevIdx][4], append(prev, 4)
	}

	best := 1000000
	var best_ord []int

	for i := 1; i < 4; i++ {
		if !isIn(i, prev) {
			v, ord := solve(append(prev, i))
			v += d[prevIdx][i]

			if ordinal == 3 && i == 2 {
				v += 1000000
			}

			if v < best {
				best = v
				best_ord = ord
			}
		}
	}
	return best, best_ord
}

func main() {
	for i := 0; i < 5; i++ {
		for j := 0; j < 5; j++ {
			fmt.Scan(&d[i][j])
		}
	}

	best, best_ord := solve([]int{0})

	fmt.Println(best)
	for i := 0; i < 5; i++ {
		fmt.Print(best_ord[i]+1, " ")
	}

}
