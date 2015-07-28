package main

import "fmt"

func main() {
	var a, b int
	fmt.Scan(&a)
	fmt.Scan(&b)
	if a%2 == 0 || b%2 == 1 {
		fmt.Println("yes")
	} else {
		fmt.Println("no")
	}
}
