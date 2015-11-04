package main

import "fmt"

func main() {
	var n, m int
	fmt.Scan(&n, &m)
	for i := 0; i < n; i++ {
		fmt.Print(i+1, " ")
	}
	fmt.Println()
	for i := 0; i < m; i++ {
		fmt.Print((i+1)*(n+1), " ")
	}
}
