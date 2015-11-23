package main

import (
	"fmt"
)

func main() {
	var t1, t2 int
	fmt.Scan(&t1, &t2)
	rejected := 0

	for i := 0; i < 10; i++ {
		var r int
		fmt.Scan(&r)
		rejected += r
	}

	if t1 <= t2-20*rejected {
		fmt.Println("No chance.")
	} else {
		fmt.Println("Dirty debug :(")
	}
}
