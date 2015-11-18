package main

import (
	"fmt"
	//"strconv"
)

func itoa(n int) string {
	return fmt.Sprintf("%d", n)
	//strconv.Itoa(n)
}

func a_helper(n int, o string) string {
	res := "sin(" + itoa(n)
	if len(o) > 0 {
		if n%2 == 1 {
			res += "-"
		} else {
			res += "+"
		}
		res += o
	}
	res += ")"

	if n > 1 {
		return a_helper(n-1, res)
	} else {
		return res
	}
}

func a(n int) string {
	return a_helper(n, "")
}

func s_helper(i int, n int) string {
	res := ""
	if i > 0 {
		res = "(" + s_helper(i-1, n) + ")"
	}
	res = res + a(i+1) + "+" + itoa(n-i)
	return res
}

func s(n int) string {
	return s_helper(n-1, n)
}

func main() {
	var n int
	fmt.Scan(&n)
	fmt.Println(s(n))
}
