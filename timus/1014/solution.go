// main.go
package main

import (
	"fmt"
	"strconv"
	"bytes"
)

func main() {
	var n int
	digits := [10]int {0, 0, 0, 0, 0, 0, 0, 0, 0 ,0}
	fmt.Scan(&n)
	
	if n == 0 {
		fmt.Println("10")
		return
	}
	if n == 1 {
		fmt.Println("1")
		return
	}
	
	for d := 9; d > 1; d-- {
		for n % d == 0 {
			n = n / d;
			digits[d] ++;
		}
	}
	var result bytes.Buffer
	for d := 2; d < 10; d ++ {
		for digits[d] > 0 {
			result.WriteString(strconv.Itoa(d))
			digits[d]--
		}
	}
	if n == 1 && result.Len() > 0 {
		fmt.Println(result.String())
	} else {
		fmt.Println("-1")	
	}
}
