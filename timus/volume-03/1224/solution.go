package main

import (
	"fmt"
)

func main() {
	var n, m int
	fmt.Scan(&n, &m)
	var x int
	if n < m {
		x = n
	} else {
		x = m
	}

	res := uint64(2) * uint64(x-1)

	if n > m {
		res += 1
	}

	fmt.Println(res)
}
