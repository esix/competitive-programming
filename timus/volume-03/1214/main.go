package main

import "fmt"

func main() {
	var x, y int
	fmt.Scan(&x, &y)
	if x > 0 && y > 0 && (x+y)%2 == 1 {
		fmt.Println(y, x)
	} else {
		fmt.Println(x, y)
	}
}
