package main

import "fmt"

var boxes = map[string]int{
	"Alice":   1,
	"Ariel":   1,
	"Aurora":  1,
	"Phil":    1,
	"Peter":   1,
	"Olaf":    1,
	"Phoebus": 1,
	"Ralph":   1,
	"Robin":   1,

	"Bambi":  2,
	"Belle":  2,
	"Bolt":   2,
	"Mulan":  2,
	"Mowgli": 2,
	"Mickey": 2,
	"Silver": 2,
	"Simba":  2,
	"Stitch": 2,

	"Dumbo":  3,
	"Genie":  3,
	"Jiminy": 3,
	"Kuzko":  3,
	"Kida":   3,
	"Kenai":  3,
	"Tarzan": 3,
	"Tiana":  3,
	"Winnie": 3,
}

func abs(x int) int {
	if x < 0 {
		return -x
	} else {
		return x
	}
}

func main() {
	var n int
	fmt.Scan(&n)

	pos := 1
	sum := 0

	for i := 0; i < n; i++ {
		var name string
		fmt.Scan(&name)
		new_pos := boxes[name]

		sum += abs(new_pos - pos)
		pos = new_pos
	}
	fmt.Println(sum)
}
