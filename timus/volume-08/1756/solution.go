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

	var m, d1, d2 int
	fmt.Fscanln(bi, &m, &d1, &d2)

	w := m * d1
	x := w % d2

	for i := 0; i < d2; i++ {
		v := w / d2
		if i < x {
			v++
		}
		fmt.Fprint(bo, v, " ")
	}
}
