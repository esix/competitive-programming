package solution

import (
	"bufio"
	"fmt"
	"os"
)

func max(a int, b int) int {
	if a > b {
		return a
	}
	return b
}

func main() {
	bi := bufio.NewReader(os.Stdin)
	bo := bufio.NewWriter(os.Stdout)

	a := make([]int, 100000)
	m := make([]int, 100000)

	a[0] = 0
	a[1] = 1
	m[0] = 0
	m[1] = 1

	for i := 2; i < 100000; i++ {
		if i%2 == 0 {
			a[i] = a[i/2]
		} else {
			a[i] = a[i/2] + a[i/2+1]
		}
		m[i] = max(m[i-1], a[i])
	}

	for true {
		var n int
		fmt.Fscanln(bi, &n)
		if n == 0 {
			break
		}
		fmt.Fprintln(bo, m[n])
	}

	bo.Flush()
}
