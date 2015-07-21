package main

import (
	"fmt"
)


func main() {
  var n int
	fmt.Scan(&n)
  for i := 0; i < n; i++ {
    for j := 0; j < n; j++ {
      if i <= j {
        diag := n - j + i - 1
        start := diag * (diag+1) / 2
        ord := i
        fmt.Print(start + ord + 1, " ")
      } else {
        diag := n - i + j - 1
        start := diag * (diag+1) / 2
        ord :=  diag -j
        fmt.Print(n*n - start - ord, " ")
      }
    }
    fmt.Println()
  }
}
