package main

import (
	"bufio"
	"fmt"
	"os"
	"sort"
	"strconv"
	"strings"
)

func main() {
	bio := bufio.NewReader(os.Stdin)
	line, _, _ := bio.ReadLine()
	n, _ := strconv.Atoi(string(line))

	var ls map[string][]string = make(map[string][]string)
	var unique_names map[string]bool = make(map[string]bool)

	for i := 0; i < n; i++ {
		line, _, _ := bio.ReadLine()
		ns := strings.Split(string(line), " ")

		for j := 0; j < 3; j++ {
			n := ns[j]
			if _, ok := ls[n]; !ok {
				ls[n] = make([]string, 0, 300)
			}
		}

		n1, n2, n3 := ns[0], ns[1], ns[2]
		ls[n1] = append(ls[n1], n2, n3)
		ls[n2] = append(ls[n2], n3, n1)
		ls[n3] = append(ls[n3], n1, n2)

		unique_names[n1] = true
		unique_names[n2] = true
		unique_names[n3] = true
	}

	// populate from Isenbaev
	result := make(map[string]int)
	score := 0
	ps := []string{"Isenbaev"}

	for len(ps) != 0 {
		score++
		for _, name := range ps {
			result[name] = score
		}
		new_ps := make([]string, 0, 300)
		for _, name := range ps {
			for _, neighbour_name := range ls[name] {
				if _, ok := result[neighbour_name]; !ok {
					new_ps = append(new_ps, neighbour_name)
				}
			}
		}
		ps = new_ps
	}

	// output:
	names := make([]string, 0, len(unique_names))
	for name := range unique_names {
		names = append(names, name)
	}
	sort.Strings(names)
	for _, name := range names {
		value := result[name]
		if value != 0 {
			fmt.Println(name, value-1)
		} else {
			fmt.Println(name, "undefined")
		}
	}

}
