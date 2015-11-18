package solution

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	bi := bufio.NewReader(os.Stdin)
	bo := bufio.NewWriter(os.Stdout)

	var n int
	fmt.Fscanln(bi, &n)
	for i := 1; i <= n; i++ {
		fmt.Fprint(bo, i, " ")
	}
	bo.Flush()
}
