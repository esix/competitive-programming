package main

import "fmt"

func main() {
	var n, s int
	fmt.Scanln(&n, &s)

	for i := 0; i < n; i++ {
		var d int
		fmt.Scanln(&d)
		fmt.Print(s/d-1, " ")
		s = d
	}
}
