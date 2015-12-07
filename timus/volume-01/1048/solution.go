package main

import (
	"bufio"
	"fmt"
	"os"
)

var prev byte
var num_of_9 int
var bo *bufio.Writer

func next(c byte) {
	if c < 9 {
		fmt.Fprint(bo, prev)
		for i := 0; i < num_of_9; i++ {
			fmt.Fprint(bo, 9)
		}
		num_of_9 = 0
		prev = c
	} else if c > 9 {
		fmt.Fprint(bo, prev+1)
		for i := 0; i < num_of_9; i++ {
			fmt.Fprint(bo, 0)
		}
		num_of_9 = 0
		prev = c - 10
	} else {
		num_of_9++
	}
}

func main() {
	bi := bufio.NewReader(os.Stdin)
	bo = bufio.NewWriter(os.Stdout)
	defer bo.Flush()

	var n int
	fmt.Fscanln(bi, &n)

	var a, b byte
	fmt.Fscanln(bi, &a, &b)

	prev = (a + b) % 10

	for i := 1; i < n; i++ {
		fmt.Fscanln(bi, &a, &b)
		next(a + b)
	}
	next(0)

	fmt.Fprintln(bo)
}
