package main

import "fmt"

func main() {
	var n, k int
	fmt.Scan(&n)
	fmt.Scan(&k)
	if k >= n {
		fmt.Println(2)
	} else {
		if (n*2)%k != 0 {
			fmt.Println((n*2)/k + 1)
		} else {
			fmt.Println((n * 2) / k)
		}
	}
}
