package main

import (
	"bufio"
	"fmt"
	"math"
	"os"
)

func get_max_size(a float64, t int) float64 {
	if t == 1 {
		return a * 2.0
	}
	if t == 2 {
		return a * math.Sqrt(2)
	}
	if t == 3 {
		return a
	}
	return 0
}

func get_min_size(a float64, t int) float64 {
	if t == 1 {
		return a * 2.0
	}
	if t == 2 {
		return a
	}
	if t == 3 {
		return a * math.Sqrt(3) / 2.0
	}
	return 0
}

func main() {
	bi := bufio.NewReader(os.Stdin)
	bo := bufio.NewWriter(os.Stdout)
	defer bo.Flush()

	var t, n int
	var a float64
	fmt.Fscanln(bi, &t, &a)

	well := get_max_size(a, t)

	res := 0

	fmt.Fscanln(bi, &n)
	for i := 0; i < n; i++ {
		fmt.Fscanln(bi, &t, &a)
		if get_min_size(a, t) <= well {
			res++
		}
	}

	fmt.Fprintln(bo, res)
}
