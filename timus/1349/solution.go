package main

import (
	"fmt"
)

func main() {
	var n int
	fmt.Scan(&n)
	switch {
	case n == 1:
		fmt.Println(1, 2, 3)
	case n == 2:
		fmt.Println(3, 4, 5)
	default:
		fmt.Println(-1)
	}
}
