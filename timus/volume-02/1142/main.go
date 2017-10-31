package main

import (
	"bufio"
	"fmt"
	"os"
)

/*
 n values:
 1) a < f(n-1)
    b < f(n-1)
		...
   f(n) += C(1, n) * f(n-1)
 2) a=b < f(n-2)
    a=c < f(n-2)
    ...
    b=c < f(n-2)
  f(n) += C(2, n) * f(n-2)
 3) ...
 N) a=b=c=...=z
  f(n) += C(n, n) * f(0) (= 1)

 result: sum(1..n)(C(i, n) * f(n-i))
*/

var fcache []int = make([]int, 11)

func fact(n int) int {
	if n == 0 {
		return 1
	}
	if fcache[n] == 0 {
		fcache[n] = fact(n-1) * n
	}
	return fcache[n]
}

func c(k int, n int) int {
	return fact(n) / (fact(k) * fact(n-k))
}

var cache []int = make([]int, 11)

func solve(n int) int {
	if n == 0 {
		return 1
	}
	if cache[n] == 0 {
		res := 0
		for i := 1; i <= n; i++ {
			res += c(i, n) * solve(n-i)
		}
		cache[n] = res
	}
	return cache[n]
}

func main() {
	bi := bufio.NewReader(os.Stdin)
	bo := bufio.NewWriter(os.Stdout)
	defer bo.Flush()

	for {
		var n int
		fmt.Fscanln(bi, &n)
		if n == -1 {
			break
		}

		fmt.Fprintln(bo, solve(n))
	}
}
