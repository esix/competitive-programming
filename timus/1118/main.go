package main

import "fmt"

func main() {
	var a, b int
	fmt.Scan(&a, &b)

	if a == 1 {
		fmt.Println(1)
		return
	}

	if a == b {
		fmt.Println(a)
		return
	}

	min := 1000000
	res := 0

	for i := b; i >= a; i-- {
		for j := i / 2; j >= 1; j-- {
			if i%j == 0 {
				if j < min {
					min = j
					res = i
					if j == 1 {
						fmt.Println(i)
						return
					}
				}
				break
			}
		}
	}

	fmt.Println(res)

}
