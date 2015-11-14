package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
)

func main() {
	bi := bufio.NewReader(os.Stdin)
	bo := bufio.NewWriter(os.Stdout)

	south, _ := bi.ReadString('\n')
	north, _ := bi.ReadString('\n')

	south = strings.TrimSpace(south)
	north = strings.TrimSpace(north)

	south_idx := 0
	north_idx := 0
	res := 0

	for south_idx < len(south) || north_idx < len(north) {
		res++
		south_car := uint8(0)
		if south_idx < len(south) {
			south_car = south[south_idx]
		}
		north_car := uint8(0)
		if north_idx < len(north) {
			north_car = north[north_idx]
		}

		south_car_can_move := true
		if south_car == 'L' && (north_car == 'F' || north_car == 'R') {
			south_car_can_move = false
		}

		north_car_can_move := true
		if north_car == 'L' && (south_car == 'F' || south_car == 'R') {
			north_car_can_move = false
		}

		if south_car_can_move {
			south_idx++
		}

		if north_car_can_move {
			north_idx++
		}
	}

	fmt.Fprintln(bo, res)
	bo.Flush()
}
