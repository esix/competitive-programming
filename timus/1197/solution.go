package main

import (
	"fmt"
)

func main() {
	var n int
	fmt.Scan(&n)

	results := []int{
		2, 3, 4, 4,
		3, 4, 6, 6,
		4, 6, 8, 8,
		4, 6, 8, 8}

	for i := 0; i < n; i++ {
		var s string
		fmt.Scan(&s)
		row := s[1] - '1'
		col := s[0] - 'a'
		if col > 3 {
			col = 7 - col
		}
		if row > 3 {
			row = 7 - row
		}

		fmt.Println(results[4*row+col])
	}
}
