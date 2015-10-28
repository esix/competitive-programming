package main

import "fmt"

func arr_min(x []int) int {
	res := x[0]
	for _, v := range x {
		if v < res {
			res = v
		}
	}
	return res
}

func solve(a int, b int, c int) int {
	return arr_min([]int{
		a + b + c,
		a + b - c,
		a + b*c,
		a - b + c,
		a - b - c,
		a - b*c,
		a*b + c,
		a*b - c,
		a * b * c})
}

func main() {
	var a, b, c int
	fmt.Scan(&a, &b, &c)
	ords := [][]int{
		//{a, b, c},
		{a, c, b},
		{b, a, c},
		{b, c, a},
		{c, a, b},
		{c, b, a},
	}
	res := solve(a, b, c)
	for _, ord := range ords {
		v := solve(ord[0], ord[1], ord[2])
		if v < res {
			res = v
		}
	}
	fmt.Println(res)
}
