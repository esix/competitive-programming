package main

import (
	"fmt"
	"math/big"
)

var fmemo = map[int64]*big.Int{
	0: big.NewInt(1),
	1: big.NewInt(1),
}

func fact(n int64) *big.Int {
	if result, ok := fmemo[n]; ok {
		return result
	} else {
		result = big.NewInt(0)
		result.Mul(big.NewInt(n), fact(n-1))
		fmemo[n] = result
		return result
	}
}

func c(n int64, k int64) *big.Int {
	var result *big.Int
	var denominator big.Int
	result = big.NewInt(0)
	denominator.Mul(fact(k), fact(n-k))
	result.Div(fact(n), &denominator)
	return result
}

func main() {
	var n, i int64
	var result *big.Int
	fmt.Scan(&n)

	result = big.NewInt(0)

	for i = 0; i <= (n-1)/2; i++ {
		// i blue lines
		result.Add(result, c(n-i-1, i))
	}

	result.Mul(big.NewInt(2), result)

	fmt.Println(result)
}
