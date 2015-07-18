package main

import (
  "fmt"
)

func main() {
	ns := make([]int, 3)
  vs := make([][]int, 3)

  for i := 0; i < 3; i++ {
    fmt.Scan(&ns[i])
    vs[i] = make([]int, ns[i])
    for j := 0; j < ns[i]; j++ {
      fmt.Scan(&vs[i][j]);
    }
  }

  is := []int{0,0,0}
  count := 0

  for is[0] < ns[0] && is[1] < ns[1] && is[2] < ns[2] {
    v0 := vs[0][is[0]]
    v1 := vs[1][is[1]]
    v2 := vs[2][is[2]]
    if v0 == v1 && v1 == v2 {
      count += 1
    }
    if v0 <= v1 && v0 <= v2 {
      is[0] += 1
    } else if v1 <= v0 && v1 <= v2 {
      is[1] += 1
    } else {
      is[2] += 1
    }
  }


	fmt.Println(count)
}
