package main

import (
	"fmt"
)

func main() {
	var h, w, n int
	fmt.Scan(&h, &w, &n)
	page := 0
	line := 0
	pos := 0

	for i := 0; i < n; i++ {
		var s string
		fmt.Scan(&s)

		pos += len(s)
		if pos > w {
			line += 1
			pos = len(s) + 1

			if line >= h {
				page += 1
				line = 0
			}
		} else {
			pos += 1
		}
	}

	fmt.Println(page + 1)
}
