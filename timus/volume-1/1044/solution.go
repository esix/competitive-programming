package solution

import (
	"bufio"
	"fmt"
	"os"
)

// number of tickets of half_len=l and sum=v
func count(l int, v int) int {
	if l == 1 {
		if 0 <= v && v <= 9 {
			return 1
		}
		return 0
	}
	r := 0
	for i := 0; i < 10; i++ {
		r += count(l-1, v-i)
	}
	return r
}

func main() {
	bi := bufio.NewReader(os.Stdin)
	bo := bufio.NewWriter(os.Stdout)

	var n int
	fmt.Fscanln(bi, &n)
	n /= 2

	r := 0
	for i := 0; i < 9*n+1; i++ {
		v := count(n, i)
		r += v * v
	}

	fmt.Fprintln(bo, r)
	bo.Flush()
}
