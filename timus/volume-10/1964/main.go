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

	var n, k int
	fmt.Fscanln(bi, &n, &k)

	s := 0
	for i := 0; i < k; i++ {
		var a int
		fmt.Fscan(bi, &a)
		s += n - a
	}

	m := n - s
	if m >= 0 && m <= n {
		fmt.Fprintln(bo, m)
	} else if m < 0 {
		fmt.Fprintln(bo, 0)
	} else {
		fmt.Fprintln(bo, n)
	}
}
