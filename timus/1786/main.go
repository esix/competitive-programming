package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
)

func isUpper(s byte) bool {
	return 'A' <= s && s <= 'Z'
}

func score(s string) int {
	res := 0
	if !isUpper(s[0]) {
		res++
	}
	for i := 1; i < 6; i++ {
		if isUpper(s[i]) {
			res++
		}
	}
	if s[0] != 's' && s[0] != 'S' {
		res++
	}
	if s[1] != 'a' && s[1] != 'A' {
		res++
	}
	if s[2] != 'n' && s[2] != 'N' {
		res++
	}
	if s[3] != 'd' && s[3] != 'D' {
		res++
	}
	if s[4] != 'r' && s[4] != 'R' {
		res++
	}
	if s[5] != 'o' && s[5] != 'O' {
		res++
	}
	return res * 5
}

func main() {
	s, _ := bufio.NewReader(os.Stdin).ReadString('\n')
	s = strings.TrimSpace(s)
	n := len(s)
	min_res := -1

	for i := 0; i <= n-6; i++ {
		res := score(s[i : i+6])

		if min_res == -1 || res < min_res {
			min_res = res
		}
	}

	fmt.Println(min_res)
}
