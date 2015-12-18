package main

import (
	"bufio"
	"fmt"
	"os"
	"regexp"
	"strconv"
)

func main() {
	bi := bufio.NewReader(os.Stdin)
	bo := bufio.NewWriter(os.Stdout)
	defer bo.Flush()

	var n1, c1, n2, t, c2, n3 int
	fmt.Fscanln(bi, &n1, &c1)
	fmt.Fscanln(bi, &n2, &t, &c2)
	fmt.Fscanln(bi, &n3)

	var n int
	fmt.Fscanln(bi, &n)

	re := regexp.MustCompile(`^(\d\d):(\d\d)`)

	total := 0

	for i := 0; i < n; i++ {
		s, _ := bi.ReadString('\n')
		match := re.FindStringSubmatch(s)
		mm, _ := strconv.Atoi(match[1])
		ss, _ := strconv.Atoi(match[2])

		if mm > 0 || ss > 6 {
			if ss > 0 {
				ss = 0
				mm++
			}
			total += mm
		}
	}

	basic := n1 + total*c1
	combined := n2
	unlimited := n3

	if total > t {
		combined += (total - t) * c2
	}

	fmt.Fprintln(bo, "Basic:    ", basic)
	fmt.Fprintln(bo, "Combined: ", combined)
	fmt.Fprintln(bo, "Unlimited:", unlimited)
}
