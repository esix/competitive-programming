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
	n_s, _ := bio.ReadString('\n')
	n, _ := strconv.Atoi(strings.TrimSpace(n_s))

	s := make([]string, 0)
	h := make([]string, 0)
	g := make([]string, 0)
	r := make([]string, 0)

	for i := 0; i < n; i++ {
		name, _ := bio.ReadString('\n')
		dep, _ := bio.ReadString('\n')

		name, dep = strings.TrimSpace(name), strings.TrimSpace(dep)
		switch dep {
		case "Slytherin":
			s = append(s, name)
		case "Hufflepuff":
			h = append(h, name)
		case "Gryffindor":
			g = append(g, name)
		case "Ravenclaw":
			r = append(r, name)
		}
	}

	fmt.Println("Slytherin:")
	for _, name := range s {
		fmt.Println(name)
	}
	fmt.Println()

	fmt.Println("Hufflepuff:")
	for _, name := range h {
		fmt.Println(name)
	}
	fmt.Println()

	fmt.Println("Gryffindor:")
	for _, name := range g {
		fmt.Println(name)
	}
	fmt.Println()

	fmt.Println("Ravenclaw:")
	for _, name := range r {
		fmt.Println(name)
	}
	fmt.Println()
}
