package main

import (
	"fmt"
	"math/big"
)

func main() {
	var n, m big.Int
	fmt.Scan(&n)
	n.DivMod(&n, big.NewInt(7), &m)
	fmt.Println(&m)
}
