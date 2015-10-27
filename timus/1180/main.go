package main

import (
	"fmt"
	"math/big"
)

func main() {
	var s string
	fmt.Scan(&s)

	i := new(big.Int)
	i.SetString(s, 10)

	m := new(big.Int)
	new(big.Int).DivMod(i, big.NewInt(3), m)
	switch m.Int64() {
	case 0:
		fmt.Println(2)
	case 1:
		fmt.Println(1)
		fmt.Println(1)
	case 2:
		fmt.Println(1)
		fmt.Println(2)
	}

}
