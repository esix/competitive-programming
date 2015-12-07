package main

import (
	"bufio"
	"fmt"
	"os"
	//"math/big"
)

func main() {
	bi := bufio.NewReader(os.Stdin)
	bo := bufio.NewWriter(os.Stdout)
	defer bo.Flush()

	var n int
	fmt.Fscanln(bi, &n)

	cache := make([]int64, n+1)

	cache[0] = 1
	for i := 1; i <= n; i++ {
		for j := n; j >= i; j-- {
			cache[j] += cache[j-i]
		}
	}

	fmt.Fprintln(bo, cache[n]-1)
}
