package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	cost := map[uint8]int{
		'a': 1,
		'b': 2,
		'c': 3,

		'd': 1,
		'e': 2,
		'f': 3,

		'g': 1,
		'h': 2,
		'i': 3,

		'j': 1,
		'k': 2,
		'l': 3,

		'm': 1,
		'n': 2,
		'o': 3,

		'p': 1,
		'q': 2,
		'r': 3,

		's': 1,
		't': 2,
		'u': 3,

		'v': 1,
		'w': 2,
		'x': 3,

		'y': 1,
		'z': 2,

		'.': 1,
		',': 2,
		'!': 3,

		' ': 1,
	}

	bio := bufio.NewReader(os.Stdin)
	line, _, _ := bio.ReadLine()
	s := string(line)
	c := 0
	for i := 0; i < len(s); i++ {
		c += cost[s[i]]
	}
	fmt.Print(c)
}
