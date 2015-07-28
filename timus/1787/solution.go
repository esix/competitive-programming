package main

import "fmt"

func main() {
	var k, n int
	fmt.Scan(&k, &n)

	a := make([]int, n)
	for i := 0; i < n; i++ {
		fmt.Scan(&a[i])
	}
	cars := 0
	for i := 0; i < n; i++ {
		cars += a[i]
		cars -= k
		if cars < 0 {
			cars = 0
		}
	}

	fmt.Println(cars)
}
