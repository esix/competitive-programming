package main

import (
	"bufio"
	"fmt"
	"os"
	"math"
)

func main() {
	bi := bufio.NewReader(os.Stdin)
	bo := bufio.NewWriter(os.Stdout)
	defer bo.Flush()

	var n int
	fmt.Fscanln(bi, &n)
	var res float64

	if n == 1 {
		res = 1
	} else {
		res = 1 + 1 / math.Sin(math.Pi / float64(n))
	}

	fmt.Fprintln(bo, res)
}
