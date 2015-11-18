package main

import "fmt"

func main() {
	var s string
	fmt.Scan(&s)
	n := len(s)
	a := make([]int, n)

	for i := 0; i < n; i++ {
		a[i] = int(s[i] - 'a')
	}
	b := make([]int, n)

	b[0] = (a[0] - 5 + 26) % 26

	for i := 1; i < n; i++ {
		b[i] = (a[i] - a[i-1] + 26) % 26
	}
	r := make([]byte, n)
	for i := 0; i < n; i++ {
		r[i] = byte(b[i] + 'a')
	}

	fmt.Println(string(r))
}
