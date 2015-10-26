package main

import "fmt"

func main() {
	var n, t, s int
	fmt.Scan(&n, &t, &s)

	for i := 0; i < n; i++ {
		var l int
		fmt.Scan(&l)
		if l+t >= s && l <= s+t {
			fmt.Println(float64(s) + float64(l-s+t)/2.0)
		}
	}
}
