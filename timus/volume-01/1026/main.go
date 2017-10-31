package main

import (
	"bufio"
	"fmt"
	"os"
	"sort"
)

func main() {
	bi := bufio.NewReader(os.Stdin)
	bo := bufio.NewWriter(os.Stdout)
	defer bo.Flush()

	var n int
	fmt.Fscanln(bi, &n)

	a := make([]int, n)

	for i := range a {
		fmt.Fscanln(bi, &a[i])
	}

	sort.Ints(a)

	bi.ReadBytes('\n')

	var k int
	fmt.Fscanln(bi, &k)

	for i := 0; i < k; i++ {
		var v int
		fmt.Fscanln(bi, &v)
		fmt.Fprintln(bo, a[v-1])
	}
}
