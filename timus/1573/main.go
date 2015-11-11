package main

import "fmt"

func c(n int64, k int64) int64 {
	if k == 0 || k == n {
		return 1
	}
	return c(n-1, k-1) + c(n-1, k)
}

func main() {
	var b, r, y int64
	fmt.Scanln(&b, &r, &y)

	var k int
	fmt.Scanln(&k)

	var b1, r1, y1 int64

	for i := 0; i < k; i++ {
		var s string
		fmt.Scanln(&s)
		switch s {
		case "Blue":
			b1++
		case "Red":
			r1++
		case "Yellow":
			y1++
		}
	}

	if b1 > b || r1 > r || y1 > y {
		fmt.Println(0)
	} else {
		fmt.Println(c(b, b1) * c(r, r1) * c(y, y1))
	}
}
