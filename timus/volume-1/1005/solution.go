package solution

import (
	"fmt"
)

var sum, n int
var ws []int

func abs(a int) int {
	if a < 0 {
		return -a
	}
	return a
}

func solve(left int, i int) int {
	if i == n {
		return left
	}
	v1 := solve(left+ws[i], i+1)
	v2 := solve(left, i+1)
	if abs(sum-2*v1) < abs(sum-2*v2) {
		return v1
	} else {
		return v2
	}
}

func main() {
	fmt.Scanln(&n)

	ws = make([]int, n)
	sum = 0

	for i := 0; i < n; i++ {
		fmt.Scan(&ws[i])
		sum += ws[i]
	}

	left := solve(ws[0], 1)
	fmt.Println(abs(sum - 2*left))
}
