package main

import (
	"fmt"
	"sort"
)

func max(a int, b int) int {
	if a > b {
		return a
	} else {
		return b
	}
}

func main() {
	var n int
	fmt.Scan(&n)

	a := make([]int, n)

	for i := 0; i < n; i++ {
		fmt.Scan(&a[i])
	}

	sort.Ints(a)

	prev := 0
	res := 0

	for i := 0; i < n; i++ {
		res += max(a[i], prev)
		prev = a[i]
	}

	res += a[n-1]

	fmt.Println(res)
}
