package main

import (
	"fmt"
)

func main() {
	var n, k int
	fmt.Scan(&n, &k)

	unused := 0
	alives := 0

	for i := 0; i < n; i++ {
		var a int
		fmt.Scan(&a)

		if a > k {
			unused += a - k
		} else {
			alives += k - a
		}
	}

	fmt.Println(unused, alives)
}
