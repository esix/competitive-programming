package main

import "fmt"

func abs(a int64) int64 {
	if a < 0 {
		return -a
	}
	return a
}

func min_diff(a []int64) int64 {
	var res int64 = -1
	for i := 0; i < len(a)-1; i++ {
		for j := i + 1; j < len(a); j++ {
			if res == -1 || res > abs(a[i]-a[j]) {
				res = abs(a[i] - a[j])
			}
		}
	}
	return res
}

func is_in_array(val int64, a []int64) bool {
	for _, v := range a {
		if v == val {
			return true
		}
	}
	return false
}

func main() {
	a := make([]int64, 3)
	fmt.Scan(&a[0], &a[1], &a[2])

	res := 2
	for !is_in_array(min_diff(a), a) {
		res++
		a = append(a, min_diff(a))
	}

	fmt.Println(res)
}
