package main

import "fmt"

func min(a, b int) int {
	if a < b {
		return a
	}
	return b
}

func solve(n, c, k int) int {
	if c >= n {
		return 0
	}
	if c < k {
		return 1 + solve(n, 2*c, k)
	} else {
		res := (n - c) / k
		if (n-c)%k > 0 {
			res += 1
		}
		return res
	}
}

func main() {
	var n, k int
	fmt.Scan(&n, &k)
	fmt.Println(solve(n, 1, k))
}
