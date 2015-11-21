package main

import (
	"bufio"
	"fmt"
	"os"
)

var cache []map[int]int

func solve(s int, l int) int {
	if s == 0 {
		return 1
	}
	if s < 0 || l == 0 {
		return 0
	}

	if res, ok := cache[l][s]; ok {
		return res
	}

	res := 0
	for d0 := 0; d0 <= 9; d0++ {
		res += solve(s-d0, l-1)
	}

	cache[l][s] = res
	return res
}

func main() {
	bi := bufio.NewReader(os.Stdin)
	bo := bufio.NewWriter(os.Stdout)
	defer bo.Flush()

	var s int
	fmt.Fscanln(bi, &s)

	cache = make([]map[int]int, 10)
	for i := 0; i <= 9; i++ {
		cache[i] = make(map[int]int)
	}

	l := 9
	res := solve(s, l)
	if s == 1 {
		res += 1 // For 1 000 000 000
	}
	fmt.Fprintln(bo, res)
}
