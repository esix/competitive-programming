package main

import (
	"bufio"
	"fmt"
	"os"
)

// Fenwick

const N = 32001

var t []int = make([]int, N)

func count(r int) int {
	result := 0
	for r >= 0 {
		result += t[r]
		r = (r & (r + 1)) - 1
	}
	return result
}

func insert(i int) {
	for i < N {
		t[i]++
		i = (i | (i + 1))
	}
}

func main() {
	bi := bufio.NewReader(os.Stdin)
	bo := bufio.NewWriter(os.Stdout)
	defer bo.Flush()

	var n int
	fmt.Fscanln(bi, &n)

	by_level := make([]int, n)

	for i := 0; i < n; i++ {
		var x, y int
		fmt.Fscanln(bi, &x, &y)
		by_level[count(x)]++
		insert(x)
	}

	for i := 0; i < n; i++ {
		fmt.Fprintln(bo, by_level[i])
	}
}
