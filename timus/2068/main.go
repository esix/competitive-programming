package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	bi := bufio.NewReader(os.Stdin)
	bo := bufio.NewWriter(os.Stdout)

	var n int
	fmt.Fscanln(bi, &n)

	w := true

	for i := 0; i < n; i++ {
		var a int
		fmt.Fscan(bi, &a)
		if a/2%2 == 0 {
			w = !w
		}
	}

	if w {
		fmt.Fprintln(bo, "Daenerys")
	} else {
		fmt.Fprintln(bo, "Stannis")
	}

	bo.Flush()
}
