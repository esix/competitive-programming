package main

import (
	"fmt"
)

func main() {
	var n int
	fmt.Scan(&n)
	var prev int
	count := 1
	fmt.Scan(&prev)

	for i := 1; i < n; i++ {
		var a int
		fmt.Scan(&a)
		if prev == a {
			count += 1
		} else {
			fmt.Print(count, " ", prev, " ")
			prev = a
			count = 1
		}
	}
	fmt.Print(count, " ", prev)
}
