package main

import "fmt"

func main() {
	var n, x int
	fmt.Scanln(&n, &x)

	var left, right int
	for i := 0; i < n; i++ {
		var y int
		fmt.Scan(&y)
		if y < 0 && (left == 0 || left < y) {
			left = y
		}
		if y > 0 && (right == 0 || right > y) {
			right = y
		}
	}

	if (x < left && left != 0) || (x > right && right != 0) {
		fmt.Println("Impossible")
		return
	}
	if left == 0 && x > 0 {
		fmt.Println("Impossible")
		return
	}
	if right == 0 && x < 0 {
		fmt.Println("Impossible")
		return
	}

	right_res := 0
	left_res := 0

	if x >= 0 {
		left_res = -2*left + x
		right_res = x
	}
	if x <= 0 {
		right_res = 2*right - x
		left_res = -x
	}
	fmt.Println(right_res, left_res)

}
