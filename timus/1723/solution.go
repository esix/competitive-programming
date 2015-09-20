package main

import (
	"bufio"
	"os"
)

func main() {
	bio := bufio.NewReader(os.Stdin)
	cnt := make(map[uint8]int)
	max_cnt := 0
	var max_c uint8
	for {
		c, err := bio.ReadByte()
		if err != nil || c == '\n' || c == '\r' {
			break
		}
		cnt[c] = cnt[c] + 1
		if cnt[c] > max_cnt {
			max_cnt = cnt[c]
			max_c = c
		}
	}
	print(string(max_c))
}
