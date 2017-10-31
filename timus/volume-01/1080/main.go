package main

import (
	"bufio"
	"fmt"
	"os"
)

type city struct {
	colored bool
	color   int
	ns      []*city
}

func (c *city) set_color(color int) {
	c.colored = true
	c.color = color
}

func main() {
	bi := bufio.NewReader(os.Stdin)
	bo := bufio.NewWriter(os.Stdout)
	defer bo.Flush()

	var n int
	fmt.Fscanln(bi, &n)

	cs := make([]city, n)

	for i := 0; i < n; i++ {
		for {
			var n int
			fmt.Fscan(bi, &n)
			if n == 0 {
				break
			}
			n--
			cs[i].ns = append(cs[i].ns, &cs[n])
			cs[n].ns = append(cs[n].ns, &cs[i])
		}
	}

	q := make([]*city, 0)
	cs[0].set_color(0)
	q = append(q, &cs[0])

	for len(q) > 0 {
		c := q[0]
		q = q[1:]

		for _, n := range c.ns {
			if n.colored && n.color == c.color {
				fmt.Fprintln(bo, -1)
				return
			}
			if !n.colored {
				n.set_color(1 - c.color)
				q = append(q, n)
			}
		}
	}

	for _, c := range cs {
		if !c.colored {
			fmt.Fprintln(bo, -1)
			return
		}
	}

	for _, c := range cs {
		fmt.Fprint(bo, c.color)
	}
	fmt.Fprintln(bo)
}
