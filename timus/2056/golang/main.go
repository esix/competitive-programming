package main


import (
	"fmt"
)

func main() {
	var n int
	
	has_3 := false
	all_5 := true
	sum := 0
	
	fmt.Scan(&n)
	for i := 0; i < n; i++ {
		var m int
		fmt.Scan(&m)
		if m != 5 {
			all_5 = false
		}
		if m == 3 {
			has_3 = true
		}
		sum += m
	}
	
	if has_3 {
		fmt.Println("None")
	} else if all_5 {
		fmt.Println("Named")
	} else if float64(sum) / float64(n) >= 4.5 {
		fmt.Println("High")
	} else {
		fmt.Println("Common")
	}
}