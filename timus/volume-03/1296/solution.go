package main

import "fmt"

func max(a, b int) int {
	if a > b {
		return a
	}
	return b
}

func main() {
	var n int
	fmt.Scanln(&n)

	max_sum := 0
	sum := 0

	for i := 0; i < n; i++ {
		var a int
		fmt.Scanln(&a)
		sum = max(0, sum+a)
		max_sum = max(max_sum, sum)
	}

	fmt.Println(max_sum)
}
