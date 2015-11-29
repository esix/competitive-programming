package main

import (
	"fmt"
)

func main() {
	var n int
	fmt.Scan(&n)
	a := make([]int, n)

	for i := 0; i < n; i++ {
		fmt.Scan(&a[i])
	}
	power := a[0] + a[1] + a[2]
	section_i := 2
	for i := 1; i < n-2; i++ {
		current_power := a[i] + a[i+1] + a[i+2]
		if current_power > power {
			power = current_power
			section_i = i + 2
		}
	}

	fmt.Println(power, section_i)
}
