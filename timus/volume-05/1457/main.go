package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)
	s := 0
	for i := 0; i < n; i++ {
		var a int
		fmt.Scan(&a)
		s += a
	}
	fmt.Println(float64(s) / float64(n))
}
