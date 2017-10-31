package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	bi := bufio.NewReader(os.Stdin)
	bo := bufio.NewWriter(os.Stdout)
	defer bo.Flush()

	var s int64
	var n int
	fmt.Fscanln(bi, &s, &n)
	paid := int64(0)

	for i := 0; i < n; i++ {
		var p int64
		fmt.Fscanln(bi, &p)
		paid += p
		if paid > s*3 {
			fmt.Fprintln(bo, "Free after", i+1, "times.")
			return
		}
	}
	fmt.Fprintln(bo, "Team.GOV!")
}
