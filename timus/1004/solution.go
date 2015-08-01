package main

import (
	"fmt"
)

const inf = 100000

func min(a, b int64) int64 {
   if a < b {
      return a
   }
   return b
}

var w [][]int64
var n int



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
        w[i][j] = inf
      }
    }

    for i := 0; i < m; i++ {
      var a, b int
      var l int64
      fmt.Scan(&a, &b, &l)
      w[a-1][b-1] = min(l, w[a-1][b-1])
      w[b-1][a-1] = min(l, w[b-1][a-1])
    }

    for k := 0; k < n; k++ {
      for i := 0; i < n; i++ {
        for j := 0; j < n; j++ {
          w[i][j] = min(w[i][j], w[i][k] + w[k][j])
        }
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
