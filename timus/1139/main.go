package main

import (
	"fmt"
)

func gcd(a int, b int) int {
	if a == 0 {
		return b
	}
	return gcd(b%a, a)
}

func main() {
	var n, m int
	fmt.Scan(&n, &m)
	n--
	m--
	fmt.Println(m + n - gcd(n, m))
}
