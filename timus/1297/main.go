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
	n := len(s)

	p := make([][]int, n)
	for i := 0; i < n; i++ {
		p[i] = make([]int, n)
	}

	max_p := string(s[0])

	for i := 0; i < n; i++ {
		p[i][i] = 1
		for j := 0; j < i; j++ {
			if s[j] == s[i] && (j == i-1 || p[j+1][i-1] == 1) {
				p[j][i] = 1
				if i-j+1 > len(max_p) {
					max_p = s[j : i+1]
				}
			}
		}
	}

	fmt.Println(max_p)
}
