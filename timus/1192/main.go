package main

import (
	"bufio"
	"fmt"
	"math"
	"os"
)

const pi = 3.1415926535
const g = 10.0

func main() {
	bi := bufio.NewReader(os.Stdin)
	bo := bufio.NewWriter(os.Stdout)

	var v, a, k float64

	fmt.Fscanln(bi, &v, &a, &k)

	l0 := v * v * math.Sin(2*(a/180*pi)) / g
	res := fmt.Sprintf("%.2f", l0/(1-1/k))
	fmt.Fprintln(bo, res)
	bo.Flush()
}
