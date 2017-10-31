package main

import (
	"fmt"
)

func main() {
	var a, b int
	fmt.Scan(&a, &b)
	fmt.Println((b-a+1-a%2)/2 + a%2)
}
