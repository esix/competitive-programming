package main

import "fmt"

var n int

func in_board(x int, y int) bool {
	return 1 <= x && x <= n && 1 <= y && y <= n
}

func abs(x int) int {
	if x < 0 {
		return -x
	}
	return x
}

func diag(x int, y int) int {
	if x < y {
		x, y = y, x
	}
	d := x + y - 1
	if d > n {
		d = 2*n - d
	}
	return d
}

func main() {
	var x, y int
	fmt.Scan(&n, &x, &y)

	king := 0
	for dx := -1; dx <= 1; dx++ {
		for dy := -1; dy <= 1; dy++ {
			if in_board(x+dx, y+dy) {
				king++
			}
		}
	}
	king--
	fmt.Println("King:", king)

	knight := 0
	for dx := -2; dx <= 2; dx++ {
		for dy := -2; dy <= 2; dy++ {
			if in_board(x+dx, y+dy) && ((abs(dx) == 2 && abs(dy) == 1) || (abs(dx) == 1 && abs(dy) == 2)) {
				knight++
			}
		}
	}
	fmt.Println("Knight:", knight)

	bishop := diag(x, y) + diag(x, n-y+1) - 2
	fmt.Println("Bishop:", bishop)

	rook := 2 * (n - 1)
	fmt.Println("Rook:", rook)

	queen := bishop + rook
	fmt.Println("Queen:", queen)

}
