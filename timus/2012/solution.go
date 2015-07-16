package main

import "fmt"

func main() {
	var f int
	fmt.Scan(&f)
	if f+5 >= 12 {
		fmt.Println("YES")
	} else {
		fmt.Println("NO")
	}
}
