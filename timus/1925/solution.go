package main

import (
	"fmt"
)

func main() {
	var n, k int
	fmt.Scan(&n, &k)

	as := 0
	bs := 0

	for i := 0; i < n; i++ {
		var a, b int
		fmt.Scan(&a, &b)
		as += a
		bs += b
	}

	//(as + k - (bs +x) = 2*(n+1)

	v := as + k - bs - 2*(n+1)
	if v >= 0 {
		fmt.Println(v)
	} else {
		fmt.Println("Big Bang!")
	}
}
