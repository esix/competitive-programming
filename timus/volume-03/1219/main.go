package main

import (
	"bufio"
	"math/rand"
	"os"
)

func main() {
	bo := bufio.NewWriter(os.Stdout)
	defer bo.Flush()

	r := rand.New(rand.NewSource(99))
	for i := 0; i < 1000000; i++ {
		x := byte('a' + r.Intn(26))
		bo.WriteByte(x)
	}
}
