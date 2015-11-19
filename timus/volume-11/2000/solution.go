package main

import (
	"bufio"
	"fmt"
	"os"
)

func max(a int, b int) int {
	if a > b {
		return a
	}
	return b
}

func min(a int, b int) int {
	if a < b {
		return a
	}
	return b
}

func main() {
	bi := bufio.NewReader(os.Stdin)
	bo := bufio.NewWriter(os.Stdout)

	var n, i1, i2 int
	fmt.Fscanln(bi, &n)

	a := make([]int, n)
	total_sum := 0
	for i := 0; i < n; i++ {
		fmt.Fscan(bi, &a[i])
		total_sum += a[i]
	}

	fmt.Fscan(bi, &i1, &i2)
	i1--
	i2--

	if i1 == i2 {
		left_sum := 0
		for i := 0; i < i1; i++ {
			left_sum += a[i]
		}
		right_sum := total_sum - a[i1] - left_sum
		fmt.Fprintln(bo, max(left_sum, right_sum)+a[i1], total_sum-max(left_sum, right_sum)-a[i1])
		bo.Flush()
		return
	}

	left := (i1 + i2) / 2
	if i1 > i2 && (i1-i2)%2 == 0 {
		left--
	}
	left_sum := 0
	for i := 0; i <= left; i++ {
		left_sum += a[i]
	}
	if i1 < i2 {
		fmt.Fprintln(bo, left_sum, total_sum-left_sum)
	} else {
		fmt.Fprintln(bo, total_sum-left_sum, left_sum)
	}

	bo.Flush()
}
