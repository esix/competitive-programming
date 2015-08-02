package main

import (
	"fmt"
)

func min(a, b int64) int64 {
   if a < b {
      return a
   }
   return b
}

var w [][]int64
var n int


type graph struct {
  name string // name of the object
  value int // its value
}


func dijkstra(start int, end int, exclude int) (int, []int) {
	return 0, make([]int, 2)
}


func solve(from int) []int {
	res := make([]int, 2)
	return res
}



func main() {
  for true {
    fmt.Scan(&n)
    if n == -1 {
      break
    }

	  var m int
    fmt.Scan(&m)

    w = make([][]int64, n)
    for i := 0; i < n; i++ {
      w[i] = make([]int64, n)
      for j := 0; j < n; j++ {
        w[i][j] = -1
      }
    }

    for i := 0; i < m; i++ {
      var a, b int
      var l int64
      fmt.Scan(&a, &b, &l)
			if w[a-1][b-1] == -1 || l < w[a-1][b-1] {
				w[a-1][b-1] = l
	      w[b-1][a-1] = l
			}
    }

    for i := 0; i < n; i++ {
      for j := 0; j < n; j++ {
        fmt.Print(w[i][j], " ")
      }
      fmt.Println()
    }
    fmt.Println()
  }

}
