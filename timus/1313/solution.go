package main

import (
	"fmt"
)

func main() {
	var n int
	fmt.Scan(&n)
	fld := make([][]int, n)
	for i := 0; i < n; i++ {
		fld[i] = make([]int, n)
		for j := 0; j < n; j++ {
			fmt.Scan(&fld[i][j])
		}
	}
	r := 0
	c := 0
	for c < n && r < n {
		fmt.Print(fld[r][c], " ")
		r -= 1
		c += 1
		if c == n {
			c = r + 2
			r = n - 1
		} else if r == -1 {
			r = c
			c = 0
		}
	}
}
