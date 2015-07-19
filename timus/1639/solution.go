package main

import (
	"fmt"
)

func main() {
	var m, n int
	fmt.Scan(&m, &n)
  if (m * n) % 2 == 0 {
    fmt.Println("[:=[first]")
  } else {
    fmt.Println("[second]=:]")  
  }
}
