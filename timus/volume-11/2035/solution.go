package main

import "fmt"

func min(a, b int) int {
	if a < b {
		return a
	}
	return b
}

func main() {
	var x, y, c int
	fmt.Scan(&x, &y, &c)

	if x+y < c {
		fmt.Println("Impossible")
		return
	}

	d := x + y - c
	dy := min(d, y)
	dx := d - dy
	fmt.Println(x-dx, y-dy)
}
