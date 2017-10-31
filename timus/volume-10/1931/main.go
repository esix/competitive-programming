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

	cap := 0
	max_compares := 0
	compares := 0
	best := 0

	var val int
	fmt.Fscan(bi, &val)

	for i := 1; i < n; i++ {
		var new_val int
		fmt.Fscan(bi, &new_val)

		if new_val >= val { // cap stays
			compares++
			if compares > max_compares {
				max_compares = compares
				best = cap
			}
		} else { // new cap
			compares = 1
			cap = i
			val = new_val
			if compares > max_compares {
				max_compares = compares
				best = cap
			}
		}
	}

	fmt.Fprintln(bo, best+1)
}
