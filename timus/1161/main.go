package main

import (
	"fmt"
	"math"
	"sort"
)

func main() {
	var n int
	fmt.Scanln(&n)
	w := make([]float64, n)
	for i := 0; i < n; i++ {
		fmt.Scanln(&w[i])
	}
	for n > 1 {
		sort.Sort(sort.Float64Slice(w))
		val := 2 * math.Sqrt(w[n-2]*w[n-1])
		n--
		w = w[:n]
		w[n-1] = val
	}
	fmt.Println(w[0])
}
