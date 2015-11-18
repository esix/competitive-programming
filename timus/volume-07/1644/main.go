package main

import "fmt"

func main() {
	var n int
	fmt.Scanln(&n)

	max := 10
	min := 2

	for i := 0; i < n; i++ {
		var k int
		var s string
		fmt.Scanln(&k, &s)
		if s == "hungry" {
			if k > min {
				min = k
			}
		} else {
			if k < max {
				max = k
			}
		}
	}

	if min >= max {
		fmt.Println("Inconsistent")
	} else {
		fmt.Println(max)
	}
}
