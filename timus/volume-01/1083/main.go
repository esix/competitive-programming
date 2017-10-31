package main

import (
	"fmt"
)

func main() {
	var n int
	var signs string
	fmt.Scan(&n, &signs)
	k := len(signs)

	var result int64 = 1
	for n > 0 {
		result *= int64(n)
		n -= k
	}

	fmt.Println(result)
}
