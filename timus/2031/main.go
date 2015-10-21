package main

import (
	"fmt"
)

func main() {
	var n int
	fmt.Scan(&n)

	a := []string{"16", "06", "68", "88"}

	if n > 4 {
		fmt.Println("Glupenky Pierre")
	} else {
		for i := 0; i < n; i++ {
			fmt.Print(a[i], " ")
		}
	}
}
