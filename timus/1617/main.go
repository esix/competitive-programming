package main

import (
	"fmt"
)

func main() {
	var n int
	fmt.Scanln(&n)
	cnts := make([]int, 101)
	for i := 0; i < n; i++ {
		var r int
		fmt.Scanln(&r)
		r -= 600
		cnts[r]++
	}

	res := 0
	for i := 0; i <= 100; i++ {
		res += cnts[i] / 4
	}
	fmt.Println(res)
}
