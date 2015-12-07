package main

import (
	"bufio"
	"fmt"
	"os"
	"regexp"
)

func main() {
	bi := bufio.NewReader(os.Stdin)
	bo := bufio.NewWriter(os.Stdout)
	defer bo.Flush()

	tram := 0
	trolleybus := 0

	s, _ := bi.ReadString(0)
	r, _ := regexp.Compile("([a-z]+)")
	for _, word := range r.FindAllString(s, -1) {
		if word == "trolleybus" {
			trolleybus += 1
		} else if word == "tram" {
			tram += 1
		}
	}

	if trolleybus > tram {
		fmt.Fprintln(bo, "Trolleybus driver")
	} else if trolleybus < tram {
		fmt.Fprintln(bo, "Tram driver")
	} else {
		fmt.Fprintln(bo, "Bus driver")
	}
}
