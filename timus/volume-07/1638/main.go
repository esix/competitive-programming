package main

import "fmt"

func main() {
	var w1, w2, n1, n2 int
	fmt.Scan(&w1, &w2, &n1, &n2)
	p1 := (n1-1)*(2*w2+w1) + w2 + w1
	p2 := (n2-1)*(2*w2+w1) + w2
	d := p1 - p2
	if d < 0 {
		d = -d
	}
	fmt.Println(d)
}
