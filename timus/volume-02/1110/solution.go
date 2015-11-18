package main

import (
	"fmt"
)

func main() {
	var n, m, y int
	fmt.Scan(&n, &m, &y)
	has_any_value := false

	for x := 0; x < m; x++ {
		v := x
		for i := 2; i <= n; i++ {
			v = (v * x) % m
		}
		if v == y {
			has_any_value = true
			fmt.Print(x, " ")
		}
	}
	if !has_any_value {
		fmt.Print(-1)
	}
}
