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

	var a, b int
	fmt.Fscanln(bi, &a, &b)

	fmt.Fprintln(bo, a+b)
}
