package main

import (
	"fmt"
	"math/big"
)

func main() {
	var n int
	var result *big.Int
	fmt.Scan(&n)
	for result = big.NewInt(36); n > 1; n-- {
		result.Mul(result, big.NewInt(55))
	}
	fmt.Println(result)
}
