package main

import (
	"fmt"
)

func main() {
	var a, b int
	fmt.Scan(&a, &b)
	res := 2*a + 39
	res2 := 2*b + 40
	if res > res2 {
		fmt.Print(res)
	} else {
		fmt.Print(res2)
	}
}
