package main

import (
	"fmt"
	"sort"
)

func fact(n int) int {
	if n == 0 {
		return 1
	} else {
		return n * fact(n-1)
	}
}

func c(k int, n int) int {
	return fact(n) / (fact(k) * fact(n-k))
}

func main() {
	var n int
	fmt.Scan(&n)

	a := make([]int, 3)

	for i := 0; i < n; i++ {
		var v int
		fmt.Scan(&v)
		a[v-1]++
	}

	sort.Ints(a)

	res := false

	if a[0] == 0 && a[1] == 0 {
		res = false
	} else if a[0] == 0 {
		// c (a[1], n)
		if n >= 6 {
			res = true
		} else {
			res = c(a[1], n) >= 6
		}
	} else {
		if n >= 6 {
			res = true
		} else {
			res = c(a[0], n)*c(a[1], n-a[0]) >= 6
		}
	}

	if res {
		fmt.Println("Yes")
	} else {
		fmt.Println("No")
	}
}
