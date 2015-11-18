package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	bi := bufio.NewReader(os.Stdin)
	bo := bufio.NewWriter(os.Stdout)

	var n, q int
	fmt.Fscanln(bi, &n)

	sums := make([]int, n+1)

	sum := 0
	for i := 1; i <= n; i++ {
		var a int
		fmt.Fscanln(bi, &a)
		sum += a
		sums[i] = sum
	}

	fmt.Fscanln(bi, &q)
	for i := 0; i < q; i++ {
		var s, e int
		fmt.Fscanln(bi, &s, &e)
		fmt.Fprintln(bo, sums[e]-sums[s-1])
	}
	bo.Flush()
}
