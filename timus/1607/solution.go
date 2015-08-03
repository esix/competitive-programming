package main

import (
	"fmt"
  "math"
)

func main() {
	var a, b, c, d float64
	fmt.Scan(&a, &b, &c, &d)
  n := math.Ceil((c - a) / (b + d))

  if n <= 0 {
    fmt.Println(a)
  } else {
    //fmt.Println(a + b*(n-1), c - d*(n-1))
    //fmt.Println(a + b*(n), c - d*(n))
    fmt.Println(math.Min(a + b*n, c - d*(n-1)))
  }
}
