package main

import (
	"bufio"
	"fmt"
	"os"
)

func fibonacci(n int) int {
	if n == 0 {
		return 0
	}
	if n == 1 {
		return 1
	}
	a1 := 0
	a2 := 1
	for i := 2; i <= n; i++ {
		a1, a2 = a2, a1+a2
	}
	return a2
}

func solve(n, k int) string {
	if n == 0 {
		return ""
	}
	if n == 1 {
		return "1"
	}
	if n == 2 {
		if k == 1 {
			return "01"
		} else {
			return "10"
		}
	}

	num_of_numbers := fibonacci(n+2) - 1
	if k <= num_of_numbers-fibonacci(n) {
		return "0" + solve(n-1, k)
	}
	marker := k - (fibonacci(n+1) - 1)

	if marker <= fibonacci(n-1) {
		k -= fibonacci(n - 1)
		semires := solve(n-1, k)
		return "10" + semires[1:]
	}

	k = k - 2*fibonacci(n-1) - fibonacci(n-2)
	semires := solve(n-2, k)
	return "10" + semires
}

func solve_all(n, k int) string {
	if k == 1 {
		res := ""
		for i := 0; i < n; i++ {
			res += "0"
		}
		return res
	}
	k--
	num_of_numbers := fibonacci(n+2) - 1 // sum of fibonacies 1..n
	if k > num_of_numbers {
		return "-1"
	}

	return solve(n, k)
}

func main() {
	bi := bufio.NewReader(os.Stdin)
	bo := bufio.NewWriter(os.Stdout)
	defer bo.Flush()

	var n, k int
	fmt.Fscanln(bi, &n, &k)

	/*n = 6
	for k := 1; k < 30; k++ {
		fmt.Fprintln(bo, k, ":", solve_all(n, k))
	}
	*/
	fmt.Fprintln(bo, solve_all(n, k))
}
