package main

import (
	"bufio"
	"fmt"
	"os"
)

// ]k < n/2 (symmetry)
// worst case is:
// ..*.....XX
// everyone between * and X will  pass
//

func main() {
	bi := bufio.NewReader(os.Stdin)
	bo := bufio.NewWriter(os.Stdout)
	defer bo.Flush()

	var n, k int
	fmt.Fscanln(bi, &n, &k)
	if k > n/2 {
		k = n - k + 1
	}

	if n == 2 {
		fmt.Fprintln(bo, 0)
	} else {
		fmt.Fprintln(bo, n-k-2)
	}
}
