package main

import (
	"bufio"
	"os"
)

func main() {
	bio := bufio.NewReader(os.Stdin)

	stack := make([]byte, 200001)
	stack_size := 0

	for {
		c, _ := bio.ReadByte()
		if c == '\n' {
			break
		}
		if stack_size > 0 && stack[stack_size-1] == c {
			stack_size--
		} else {
			stack[stack_size] = c
			stack_size++
		}
	}

	print(string(stack[:stack_size]))
}
