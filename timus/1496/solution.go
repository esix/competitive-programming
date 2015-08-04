package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func main() {
	bio := bufio.NewReader(os.Stdin)
	line, _, _ := bio.ReadLine()
	n, _ := strconv.Atoi(string(line))

	m := make(map[string]int)

	for i := 0; i < n; i++ {
		line, _, _ := bio.ReadLine()
		name := string(line)
		m[name]++
		if m[name] == 2 {
			fmt.Println(name)
		}
	}
}
