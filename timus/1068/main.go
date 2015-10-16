package main

import (
	"fmt"
)

func abs(x int) int {
	if x < 0 {
		return -x
	} else {
		return x
	}

}

func main() {
	var n int
	fmt.Scan(&n)
	fmt.Print((1 + n) * (1 + abs(n-1)) / 2)
}
