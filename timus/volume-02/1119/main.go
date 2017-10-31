package main

import (
	"fmt"
	"math"
)

func min(a float64, b float64) float64 {
	if a < b {
		return a
	}
	return b
}

func main() {
	var n, m, k int
	fmt.Scanln(&n, &m)

	a := make([][]bool, n+1)
	for i := 0; i <= n; i++ {
		a[i] = make([]bool, m+1)
	}

	fmt.Scanln(&k)
	for i := 0; i < k; i++ {
		var y, x int
		fmt.Scanln(&y, &x)
		a[y][x] = true
	}

	l := 100.0
	L := math.Sqrt(20000.0)

	w := make([]float64, n+1)
	for i := 0; i <= n; i++ {
		w[i] = float64(i) * l
	}

	for j := 1; j < m+1; j++ {
		ww := make([]float64, n+1)
		ww[0] = w[0] + l

		for i := 1; i <= n; i++ {
			ww[i] = min(w[i]+l, ww[i-1]+l)
			if a[i][j] {
				ww[i] = min(ww[i], w[i-1]+L)
			}
		}
		w = ww
		//fmt.Println(w)
	}

	fmt.Println(math.Floor(w[n] + .5))
}
