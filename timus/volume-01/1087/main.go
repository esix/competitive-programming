package main

import (
	"bufio"
	"fmt"
	"os"
)

var cache []int = make([]int, 10001)
var ks []int

func winner(v int) int {
	if v == 0 {
		return 1
	}

	if cache[v] == 0 {
		cache[v] = 2
		for _, k := range ks {
			if v >= k && winner(v-k) == 2 {
				cache[v] = 1
				break
			}
		}
	}

	return cache[v]
}

func main() {
	bi := bufio.NewReader(os.Stdin)
	bo := bufio.NewWriter(os.Stdout)
	defer bo.Flush()

	var n, m int
	fmt.Fscanln(bi, &n, &m)

	ks = make([]int, m)
	for i := range ks {
		fmt.Fscan(bi, &ks[i])
	}

	fmt.Fprintln(bo, winner(n))
}
