package main

import (
	"fmt"
	"math"
)

type point struct {
	X, Y float64
}

func main() {
	var (
		n int
		r float64
	)

	fmt.Scanln(&n, &r)

	ps := make([]point, n)

	for i := 0; i < n; i++ {
		fmt.Scanln(&ps[i].X, &ps[i].Y)
	}

	var l float64

	for i := 0; i < n; i++ {
		p1 := ps[i]
		p2 := ps[(i+1)%n]
		dx := p1.X - p2.X
		dy := p1.Y - p2.Y
		l += math.Sqrt(dx*dx + dy*dy)
	}
	l += 2 * math.Pi * r

	fmt.Printf("%0.2f\n", l)
}
