package main

import (
	"bufio"
	"fmt"
	"math/big"
	"os"
)

func solve(n int64) *big.Int {
	switch n {
	case 1:
		return big.NewInt(1)
	case 2:
		return big.NewInt(2)
	case 3:
		return big.NewInt(3)
	case 4:
		return big.NewInt(4)
	default:
		return big.NewInt(0).Mul(big.NewInt(3), solve(n-3))
	}
}

func main() {
	bi := bufio.NewReader(os.Stdin)
	bo := bufio.NewWriter(os.Stdout)
	defer bo.Flush()

	var n int64
	fmt.Fscanln(bi, &n)

	fmt.Fprintln(bo, solve(n))
}
