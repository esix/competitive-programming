package main

import (
	"fmt"
)

func main() {
	var n, k int
	fmt.Scan(&n, &k)
	fmt.Println(n*(n-1)/2 - k)
}
