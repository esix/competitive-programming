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

	res := make([]int, 0)

	for n > 1 {
		res = append(res, n/2)
		n -= n / 2
	}
	fmt.Fprintln(bo, len(res))
	for _, v := range res {
		fmt.Fprint(bo, v, " ")
	}
}
