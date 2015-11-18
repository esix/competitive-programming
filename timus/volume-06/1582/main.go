package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	bi := bufio.NewReader(os.Stdin)
	bo := bufio.NewWriter(os.Stdout)

	var k1, k2, k3 float64
	fmt.Fscanln(bi, &k1, &k2, &k3)
	s := 1000 * k1 * k2 * k3 / (k2*k3 + k1*k2 + k1*k3)

	fmt.Fprintln(bo, fmt.Sprintf("%.0f", s))
	bo.Flush()
}
