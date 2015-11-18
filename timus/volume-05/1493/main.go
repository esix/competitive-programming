package main

import (
	"fmt"
)

func is_lucky(n int) bool {
	l := (n/1000)%10 + (n/10000)%10 + (n/100000)%10
	r := (n/1)%10 + (n/10)%10 + (n/100)%10
	return l == r
}

func main() {
	var n int
	fmt.Scanf("%d", &n)
	if is_lucky(n+1) || is_lucky(n-1) {
		fmt.Print("Yes")
	} else {
		fmt.Print("No")
	}
}
