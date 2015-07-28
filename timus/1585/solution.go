package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

const p0name string = "Emperor Penguin"
const p1name string = "Little Penguin"
const p2name string = "Macaroni Penguin"

func main() {
	bio := bufio.NewReader(os.Stdin)
	line, _, _ := bio.ReadLine()
	n, _ := strconv.Atoi(string(line))

	p0 := 0
	p1 := 0
	p2 := 0

	for i := 0; i < n; i++ {
		line, _, _ := bio.ReadLine()
		name := string(line)
		if name == p0name {
			p0 += 1
		} else if name == p1name {
			p1 += 1
		} else if name == p2name {
			p2 += 1
		}
	}

	if p0 > p1 && p0 > p2 {
		fmt.Print(p0name)
	} else if p1 > p0 && p1 > p2 {
		fmt.Print(p1name)
	} else if p2 > p0 && p2 > p1 {
		fmt.Println(p2name)
	}
}
