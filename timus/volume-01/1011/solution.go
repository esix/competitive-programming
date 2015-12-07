package main

import (
	"bufio"
	"fmt"
	"math"
	"os"
)

/*
	0 < p, q < 10000
	p < 10000*k / n < q
	10000 * k / q < n < 10000 * k / p
*/

func main() {
	bi := bufio.NewReader(os.Stdin)
	bo := bufio.NewWriter(os.Stdout)
	defer bo.Flush()

	var p_fl, q_fl float64
	fmt.Fscan(bi, &p_fl, &q_fl)

	p := int64(math.Floor(p_fl*100.0 + .5))
	q := int64(math.Floor(q_fl*100.0 + .5))

	var k int64
	for k = 1; true; k++ {
		kk := 10000 * k
		pp := kk / p
		qq := kk / q
		if qq < pp {
			if kk%p == 0 && pp-qq == 1 {
				// special case: 10000 * k ~ p
			} else {
				break
			}
		}
	}

	fmt.Fprintln(bo, 10000*k/q+1)
}
