package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
)

func main() {
	s, _ := bufio.NewReader(os.Stdin).ReadString('\n')
	s = strings.TrimSpace(s)

	min_base := 2
	sum := 0
	for _, c := range s {
		x := 1
		if '0' <= c && c <= '9' {
			x = int(c - '0')
		}
		if 'A' <= c && c <= 'Z' {
			x = int(c - 'A' + 10)
		}

		if x+1 > min_base {
			min_base = x + 1
		}

		sum += x
	}

	for k := min_base; k <= 36; k++ {
		if sum%(k-1) == 0 {
			fmt.Println(k)
			return
		}
	}

	fmt.Println("No solution.")
}
