package main

import "fmt"

func main() {
	m := make([]int, 7)
	for i := 0; i < 7; i++ {
		fmt.Scan(&m[i])
	}
	c0 := m[6]
	c1 := m[5]
	c2 := m[4]
	x0 := (c0 + m[3] + m[1] + m[0]) % 2
	x1 := (c1 + m[3] + m[2] + m[0]) % 2
	x2 := (c2 + m[3] + m[2] + m[1]) % 2

	v := 4*x0 + 2*x1 + x2

	switch v {
	case 1:
		m[4] = 1 - m[4]
	case 2:
		m[5] = 1 - m[5]
	case 4:
		m[6] = 1 - m[6]

	case 6:
		m[0] = 1 - m[0]
	case 5:
		m[1] = 1 - m[1]
	case 3:
		m[2] = 1 - m[2]
	case 7:
		m[3] = 1 - m[3]
	}
	for i := 0; i < 7; i++ {
		fmt.Print(m[i], " ")
	}
}
