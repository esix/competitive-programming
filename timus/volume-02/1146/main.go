package main

import "fmt"

func main() {
	var n int
	fmt.Scanln(&n)
	a := make([][]int, n)
	part := make([][]int, n)

	for i := 0; i < n; i++ {
		a[i] = make([]int, n)
		part[i] = make([]int, n)
		for j := 0; j < n; j++ {
			fmt.Scan(&a[i][j])
		}
	}

	max := -128

	for si := 0; si < n; si++ {
		for sj := 0; sj < n; sj++ {
			for i := 0; i <= si; i++ {
				for j := 0; j <= sj; j++ {
					v := a[si-i][sj-j]
					if i > 0 {
						v += part[i-1][j]
					}
					if j > 0 {
						v += part[i][j-1]
					}
					if i > 0 && j > 0 {
						v -= part[i-1][j-1]
					}
					part[i][j] = v
					if v > max {
						max = v
					}
				}
			}
		}
	}

	fmt.Println(max)

}
