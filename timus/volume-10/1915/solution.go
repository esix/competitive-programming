package main

import (
	"bufio"
	"fmt"
	"os"
)

type item interface {
	pop() (int, item)
}

type coin struct {
	val  int
	prev item
}

func (c *coin) pop() (int, item) {
	return c.val, c.prev
}

type rep struct {
	top    item
	start  item
	runned bool
}

func (r *rep) pop() (int, item) {
	var val int
	val, r.top = r.top.pop()
	if r.top == nil {
		if !r.runned {
			r.top = r.start
			r.runned = true
		} else {
			r.top = r.start // reset
			r.runned = false
			return val, nil
		}
	}
	return val, r
}

func new_rep(q item) *rep {
	r := rep{q, q, false}
	return &r
}

func main() {
	bi := bufio.NewReader(os.Stdin)
	bo := bufio.NewWriter(os.Stdout)
	defer bo.Flush()

	var n int
	fmt.Fscanln(bi, &n)

	var q item

	for i := 0; i < n; i++ {
		var v int
		fmt.Fscanln(bi, &v)
		if v > 0 {
			q = &coin{v, q}
		} else if v == 0 {
			if q != nil {
				q = new_rep(q)
			}
		} else if v == -1 {
			var v int
			v, q = q.pop()
			fmt.Fprintln(bo, v)
		}
	}
}
