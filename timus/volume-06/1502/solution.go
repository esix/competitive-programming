package main

import (
	"fmt"
)

func main() {
	var n, res, sum, i int64

	fmt.Scan(&n)
	res = 0
	sum = 0

	for i = 0; i <= n; i++ {
		sum += i
		res += i*(i+1) + sum
	}

	fmt.Println(res)
}
