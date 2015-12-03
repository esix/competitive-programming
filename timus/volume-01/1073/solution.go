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

	cache := make([]int, n+1)

	for i := 1; i <= n; i++ {
		cache[i] = 1000000000
		for j := 1; j*j <= i; j++ {
			r := 1 + cache[i-j*j]
			if r < cache[i] {
				cache[i] = r
			}
		}
	}
	fmt.Fprintln(bo, cache[n])
}
