package main

import (
  "fmt"
  "bufio"
  "os"
  "strings"
)

func main() {
  reader := bufio.NewReader(os.Stdin)
	s, _ := reader.ReadString('\n')
  s = strings.TrimSpace(s)

  n := len(s)

  i := 1
  for ; i < n; i++ {
    is_p := true

    // check Palindrom from i to n
    l := n - i
    for k := 0; k < l / 2; k++ {
      if s[i+k] != s[n-1-k] {
        is_p = false
        break
      }
    }
    if is_p {
      break
    }
  }

  result := s
  for k := i-1; k >= 0; k-- {
    result += string(s[k])
  }

  fmt.Println(result)
}
