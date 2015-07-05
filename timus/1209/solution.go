package main

import (
	"fmt"
	"math"
)


func main() {
	var n int
	fmt.Scan(&n)
	for i := 0; i < n; i++ {
		var k int64
		fmt.Scan(&k)
		// k(i) = 1 + i^2 / 2*(i+1)
		// i = ...; D = 1+4*(2(K-1))
		var d float64
		d = math.Sqrt(float64(1 + 8*(k-1)))
		if d == math.Floor(d) {
			fmt.Print(1)
		} else {
			fmt.Print(0)
		}

		fmt.Print(" ")
	}
}
