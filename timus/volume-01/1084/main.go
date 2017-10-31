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

	var a, r float64
	fmt.Fscanln(bi, &a, &r)

	var res float64
	if 2*r <= a { // only circle
		res = math.Pi * r * r
	} else if a*math.Sqrt(2)/2 <= r { // full square
		res = a * a
	} else {
		angle := math.Acos(a / (2 * r))
		sector := (math.Pi/2 - 2*angle) * r * r / 2
		triangle := a * r * math.Sin(angle) / 4
		res = 4*sector + 8*triangle
	}

	fmt.Fprintln(bo, res)
}
