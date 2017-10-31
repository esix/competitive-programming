package main

import "fmt"

func main() {
	var n, m int
	fmt.Scanln(&n, &m)

	a := make([]int, n)

	for i := 0; i < n; i++ {
		fmt.Scanln(&a[i])
	}

	for i := m; i < m+10; i++ {
		fmt.Print(a[i%n])
	}
}
