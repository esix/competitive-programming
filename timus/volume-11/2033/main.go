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

	counts := make(map[string]int)
	costs := make(map[string]int)

	for i := 0; i < 6; i++ {
		bio.ReadString('\n')
		device, _ := bio.ReadString('\n')
		s_cost, _ := bio.ReadString('\n')

		device, s_cost = strings.TrimSpace(device), strings.TrimSpace(s_cost)
		cost, _ := strconv.Atoi(s_cost)

		counts[device]++

		if _, ok := costs[device]; !ok {
			costs[device] = cost
		}
		if cost < costs[device] {
			costs[device] = cost
		}
	}

	best_device := ""

	for device := range counts {
		if best_device == "" {
			best_device = device
		}

		if counts[device] > counts[best_device] {
			best_device = device
		} else if counts[device] == counts[best_device] && costs[device] < costs[best_device] {
			best_device = device
		}
	}

	fmt.Println(best_device)

}
