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

	const SIZE = 350000 // 15916 primes

	is_p := make([]bool, SIZE)
	for i := 0; i < SIZE; i++ {
		is_p[i] = true
	}
	is_p[0] = false
	is_p[1] = false

	ps := make([]int, 0)

	for i := 2; i <= SIZE/2; i++ {
		if is_p[i] {
			for v := i * 2; v < SIZE; v += i {
				is_p[v] = false
			}
			ps = append(ps, i)
		}
	}

	var n int
	fmt.Fscanln(bi, &n)

	for i := 0; i < n; i++ {
		var j int
		fmt.Fscanln(bi, &j)
		fmt.Fprintln(bo, ps[j-1])
	}
}
