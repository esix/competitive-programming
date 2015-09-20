package main

import (
	"bufio"
	"os"
  "strconv"
)

func main() {
	bio := bufio.NewReader(os.Stdin)
  line, _, _ := bio.ReadLine()
	n, _ := strconv.Atoi(string(line))
  cnt := make(map[string]bool)
  res := 0

  for i := 0; i < n; i++ {
    line, _, _ := bio.ReadLine()
    name := string(line)
    if cnt[name] {
      res ++
    }
    cnt[name] = true
  }
  print(res)
}
