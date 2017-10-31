package main

import (
	"bufio"
	"fmt"
	"os"
)

/*
1: 1
2: 1 2
3: 1 2 3
   1 3 2
4: 1.2 3 4       f(3)
   1.2 4 3
	 1 3 2.4       f(1)
	 1 3 4 2       +1
5: 1.2 3 4 5     f(4) = 4  (f(n-1))
   1.2 3 5 4
	 1.2 4 3 5
	 1.2 4 5 3
   1 3 2.4 5     f(2) = 1  (f(n-3))
	 1 3 5 4 2     +1        (up then down)
*/

var cache []int = make([]int, 56)
var n int

func f(n int) int {
	if cache[n] == 0 {
		cache[n] = f(n-1) + f(n-3) + 1
	}
	return cache[n]
}

func main() {
	bi := bufio.NewReader(os.Stdin)
	bo := bufio.NewWriter(os.Stdout)
	defer bo.Flush()

	cache[1] = 1
	cache[2] = 1
	cache[3] = 2

	var n int
	fmt.Fscanln(bi, &n)
	fmt.Fprintln(bo, f(n))
}
