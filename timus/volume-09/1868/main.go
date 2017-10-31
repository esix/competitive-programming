package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func main() {
	bi := bufio.NewReader(os.Stdin)
	bo := bufio.NewWriter(os.Stdout)
	defer bo.Flush()

	var s string

	cs := make(map[string]string, 12)
	for i := 0; i < 12; i++ {
		s, _ = bi.ReadString('\n')
		s = strings.TrimSpace(s)
		if i < 4 {
			cs[s] = "gold"
		} else if i < 8 {
			cs[s] = "silver"
		} else {
			cs[s] = "bronze"
		}
	}

	s, _ = bi.ReadString('\n')
	s = strings.TrimSpace(s)
	n, _ := strconv.Atoi(s)

	max_score := 0
	n_of_people := 0

	for i := 0; i < n; i++ {
		score := 0
		s, _ = bi.ReadString('\n')
		s = strings.TrimSpace(s)
		k, _ := strconv.Atoi(s)
		for j := 0; j < k; j++ {
			s, _ = bi.ReadString('\n')
			s = strings.TrimSpace(s)
			guess := strings.Split(s, " : ")
			if cs[guess[0]] == guess[1] {
				score++
			}
		}
		if score == max_score {
			n_of_people++
		} else if score > max_score {
			max_score = score
			n_of_people = 1
		}
	}

	fmt.Fprintln(bo, n_of_people*5)
}
