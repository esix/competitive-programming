package main

import (
	"fmt"
	"regexp"
	"strconv"
)

const window = "window"
const aisle = "aisle"
const neither = "neither"

func main() {
	var s string
	fmt.Scan(&s)
	re := regexp.MustCompile(`^(\d+)(\w)$`)
	match := re.FindStringSubmatch(s)
	row, _ := strconv.Atoi(match[1])
	col := match[2][0]

	switch {
	case 1 <= row && row <= 2:
		if col == 'A' || col == 'D' {
			fmt.Println(window)
		} else {
			fmt.Println(aisle)
		}
	case 3 <= row && row <= 20:
		if col == 'A' || col == 'F' {
			fmt.Println(window)
		} else {
			fmt.Println(aisle)
		}
	case 21 <= row && row <= 65:
		if col == 'A' || col == 'K' {
			fmt.Println(window)
		} else if col == 'C' || col == 'D' || col == 'G' || col == 'H' {
			fmt.Println(aisle)
		} else {
			fmt.Println(neither)
		}
	}
}
