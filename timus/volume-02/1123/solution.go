package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
)

func reverse(s string) string {
	bs := []byte(s)
	for i, j := 0, len(bs)-1; i < j; i, j = i+1, j-1 {
		bs[i], bs[j] = bs[j], bs[i]
	}
	return string(bs)
}

func cmp(a string, b string) int {
	if len(a) < len(b) {
		return -1
	}
	if len(a) > len(b) {
		return 1
	}
	for i := 0; i < len(a); i++ {
		if a[i] < b[i] {
			return -1
		}
		if a[i] > b[i] {
			return 1
		}
	}
	return 0
}

func inc(s string) string {
	r := []byte(reverse(s))

	c := 1
	for i := 0; i < len(r); i++ {
		r[i] = r[i] + 1
		if r[i] <= '9' {
			c = 0
			break
		}
		r[i] = '0'
	}
	if c == 1 {
		r = append(r, '1')
	}
	return reverse(string(r))
}

func main() {
	bi := bufio.NewReader(os.Stdin)
	bo := bufio.NewWriter(os.Stdout)
	defer bo.Flush()

	s, _ := bi.ReadString('\n')
	s = strings.TrimSpace(s)
	n := len(s)

	var left, right, middle string
	if n%2 == 0 {
		left = s[:n/2]
		middle = ""
		right = s[n/2:]
	} else {
		left = s[:n/2]
		middle = s[n/2 : n/2+1]
		right = s[n/2+1:]
	}

	rev_left := reverse(left)

	if cmp(right, rev_left) <= 0 {
		fmt.Fprintln(bo, left+middle+rev_left)
		return
	}

	new_left := left + middle
	new_left = inc(new_left)
	// new_left may not be longer then left + middle
	// because if it could, left would be 999...9 but it is palindrome with any right

	if len(middle) == 0 {
		fmt.Fprintln(bo, new_left+reverse(new_left))
	} else {
		fmt.Fprintln(bo, new_left+reverse(new_left)[1:])
	}

}
