package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	in := bufio.NewReader(os.Stdin)
	in_sentence := false

	for {
		line, err := in.ReadBytes('\n')
		if err != nil {
			return
		}
		fixed := make([]byte, len(line))

		for i, c := range line {
			is_letter := 'A' <= c && c <= 'Z'
			is_delim := c == '.' || c == '?' || c == '!'
			if !in_sentence {
				if is_letter {
					in_sentence = true
				}
				fixed[i] = c
			} else {
				if is_letter {
					fixed[i] = c - 'A' + 'a'
				} else if is_delim {
					in_sentence = false
					fixed[i] = c
				} else {
					fixed[i] = c
				}
			}
		}
		fmt.Print(string(fixed))
	}
}
