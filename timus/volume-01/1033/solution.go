package main

import (
	"bufio"
	"fmt"
	"os"
)

type coord struct {
	i, j int
}

var n int
var s []string
var queued [][]bool
var q []coord

func is_valid(i int, j int) bool {
	return 0 <= i && 0 <= j && i < n && j < n
}

func can_queue(i int, j int) bool {
	return is_valid(i, j) && !queued[i][j] && s[i][j] == '.'
}

func queue(i int, j int) {
	if can_queue(i, j) {
		q = append(q, coord{i, j})
		queued[i][j] = true
	}
}

func count_square(i int, j int) int {
	res := 0
	if (i > 0 && s[i-1][j] == '#') || (i == 0 && j != 0) { // up
		res++
	}
	if (j > 0 && s[i][j-1] == '#') || (j == 0 && i != 0) { // left
		res++
	}
	if (i < n-1 && s[i+1][j] == '#') || (i == n-1 && j != n-1) { // down
		res++
	}
	if (j < n-1 && s[i][j+1] == '#') || (j == n-1 && i != n-1) { // right
		res++
	}
	return res
}

func main() {
	bi := bufio.NewReader(os.Stdin)
	bo := bufio.NewWriter(os.Stdout)
	defer bo.Flush()

	fmt.Fscanln(bi, &n)
	s = make([]string, n)
	queued = make([][]bool, n)

	for i := 0; i < n; i++ {
		fmt.Fscanln(bi, &s[i])
		queued[i] = make([]bool, n)
	}

	//res := 0
	q = make([]coord, 0)
	queue(0, 0)
	queue(n-1, n-1)

	res := 0

	for len(q) > 0 {
		i := q[0].i
		j := q[0].j
		q = q[1:]

		queue(i+1, j)
		queue(i-1, j)
		queue(i, j+1)
		queue(i, j-1)

		res += count_square(i, j)
	}

	fmt.Fprintln(bo, res*9)
}
