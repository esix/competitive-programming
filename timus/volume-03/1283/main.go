package main

import (
	"bufio"
	"fmt"
	"math"
	"os"
)

func main() {
	bi := bufio.NewReader(os.Stdin)
	bo := bufio.NewWriter(os.Stdout)
	defer bo.Flush()

	var s, e, p float64
	fmt.Fscanln(bi, &s, &e, &p)
	p = (100.0 - p) / 100.0

	n := math.Log(e/s) / math.Log(p)

	if n <= 0 {
		n = 0
	}

	fmt.Fprintln(bo, math.Ceil(n))
}
