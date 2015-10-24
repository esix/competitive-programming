package main

import (
	"fmt"
)

func main() {
	var x int
	fmt.Scan(&x)
	x *= 2
	for n := 44720; n > 0; n-- {
		if x%n == 0 {
			a := (x/n + 1 - n)
			if a > 0 && a%2 == 0 {
				fmt.Println(a/2, n)
				return
			}
		}
	}
	fmt.Println(x/2, 1)
}
