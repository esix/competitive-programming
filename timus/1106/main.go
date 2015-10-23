package main

import "fmt"

var a [][]bool
var g = map[int]int{}
var n int

func populate(i int, grpId int) {
	g[i] = grpId
	for j := 0; j < n; j++ {
		if a[i][j] {
			if _, exists := g[j]; !exists {
				populate(j, 1-grpId)
			}
		}
	}
}

func main() {
	fmt.Scan(&n)

	a = make([][]bool, n)
	for i := 0; i < n; i++ {
		a[i] = make([]bool, n)
	}

	for i := 0; i < n; i++ {
		var j int
		for fmt.Scan(&j); j != 0; fmt.Scan(&j) {
			j--
			a[i][j] = true
			a[j][i] = true
		}
	}

	for i := 0; i < n; i++ {
		if _, exists := g[i]; !exists {
			populate(i, 0)
		}
	}

	cnt := 0
	for i := 0; i < n; i++ {
		if g[i] == 1 {
			cnt++
		}
	}
	fmt.Println(cnt)

	for i := 0; i < n; i++ {
		if g[i] == 1 {
			fmt.Print(i+1, " ")
		}
	}

}
