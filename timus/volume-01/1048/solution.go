package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	bi := bufio.NewReader(os.Stdin)
	bo := bufio.NewWriter(os.Stdout)
	defer bo.Flush()

	var n int
	fmt.Fscanln(bi, &n)

	a := make([]byte, n)
	b := make([]byte, n)
	for i := 0; i < n; i++ {
		fmt.Fscanln(bi, &a[i], &b[i])
	}

	c := make([]byte, n)
	carry := byte(0)

	for i := n - 1; i >= 0; i-- {
		x := a[i] + b[i] + carry
		carry = 0
		if x >= 10 {
			x -= 10
			carry = 1
		}
		c[i] = x
	}

	for i := 0; i < n; i++ {
		fmt.Fprint(bo, c[i])
	}
	fmt.Fprintln(bo)
}
