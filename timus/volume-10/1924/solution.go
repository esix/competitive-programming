package main

import (
	"fmt"
)

func main() {
	var n int
	fmt.Scan(&n)
	if (n-1)%4 < 2 {
		fmt.Println("grimy")
	} else {
		fmt.Println("black")
	}
}
