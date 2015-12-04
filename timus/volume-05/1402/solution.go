package main

import (
	"bufio"
	"fmt"
	"math/big"
	"os"
)

var cache = make([]*big.Int, 22)

func fact(n int) *big.Int {
	if n == 0 {
		return big.NewInt(1)
	}
	if cache[n] == nil {
		cache[n] = new(big.Int).Mul(fact(n-1), big.NewInt(int64(n)))
	}
	return cache[n]
}

func a(k int, n int) *big.Int {
	return new(big.Int).Div(fact(n), fact(n-k))
}

func main() {
	bi := bufio.NewReader(os.Stdin)
	bo := bufio.NewWriter(os.Stdout)
	defer bo.Flush()

	var k int
	fmt.Fscanln(bi, &k)

	res := new(big.Int)
	for i := 2; i <= k; i++ {
		res.Add(a(i, k), res)
	}

	fmt.Fprintln(bo, res)
}
