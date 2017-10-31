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

	var n int
	fmt.Fscanln(bi, &n)

	a := make([]float64, n)
	s := float64(0)

	for i := range a {
		fmt.Fscan(bi, &a[i])
		s += a[i]
	}

	litres_for_1 := float64(s) / float64(n+1)

	s = 0

	for i := range a {
		if a[i] >= litres_for_1 {
			a[i] -= litres_for_1
		} else {
			a[i] = 0
		}
		s += a[i]
	}

	for i := range a {
		fmt.Fprint(bo, math.Floor(100*a[i]/s+0.0001), " ")
	}
}
