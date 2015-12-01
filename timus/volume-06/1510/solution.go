package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	in := bufio.NewReader(os.Stdin)

	var n int
	fmt.Fscanln(in, &n)

	cnt := 0
	val := 0

	for i := 0; i < n; i++ {
		var k int
		fmt.Fscanln(in, &k)

		if cnt == 0 {
			cnt = 1
			val = k
		} else if val == k {
			cnt++
		} else {
			cnt--
		}
	}

	fmt.Println(val)
}
