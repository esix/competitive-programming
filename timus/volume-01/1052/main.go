package main

import (
	"bufio"
	"fmt"
	"os"
)

type point struct {
	x int
	y int
}

func are_on_one_line(p1 point, p2 point, p3 point) bool {
	return (p2.x-p1.x)*(p3.y-p1.y)-(p2.y-p1.y)*(p3.x-p1.x) == 0
}

func main() {
	bi := bufio.NewReader(os.Stdin)
	bo := bufio.NewWriter(os.Stdout)
	defer bo.Flush()

	var n int
	fmt.Fscanln(bi, &n)

	p := make([]point, n)
	for i := range p {
		fmt.Fscanln(bi, &p[i].x, &p[i].y)
	}

	max := 1

	for i := 0; i < n-2; i++ {
		for j := i + 1; j < n-1; j++ {
			m := 2
			for k := j + 1; k < n; k++ {
				if are_on_one_line(p[i], p[j], p[k]) {
					m++
				}
			}
			if m > max {
				max = m
			}
		}
	}

	fmt.Fprintln(bo, max)
}
