package main

import "fmt"

func abs(x int) int {
	if x < 0 {
		return -x
	} else {
		return x
	}
}

func main() {
	var n, m int
	fmt.Scan(&n, &m)

	voices := make([]int, n)

	for i := 0; i < m; i++ {
		var cid int
		fmt.Scan(&cid)
		voices[cid-1] += 1
	}

	for i := 0; i < n; i++ {
		fmt.Printf("%.2f%%\n", float64(voices[i]) * 100.0 / float64(m))
	}
}
