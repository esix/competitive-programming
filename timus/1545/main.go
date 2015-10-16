package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func main() {
	bio := bufio.NewReader(os.Stdin)
	line, _, _ := bio.ReadLine()
	n, _ := strconv.Atoi(string(line))

	h := make([]string, n)

	for i := 0; i < n; i++ {
		line, _, _ := bio.ReadLine()
		h[i] = string(line)
	}

	line, _, _ = bio.ReadLine()
	k := string(line)

	for i := 0; i < n; i++ {
		if strings.HasPrefix(h[i], k) {
			fmt.Println(h[i])
		}
	}

}
