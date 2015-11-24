package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	bi := bufio.NewReader(os.Stdin)
	bo := bufio.NewWriter(os.Stdout)
	defer bo.Flush()

	var MOD = 1000000007

	var n, a, b int
	fmt.Fscanln(bi, &n, &a, &b)
	as := make([]int, a+1)
	bs := make([]int, b+1)
	as[1] = 1
	bs[1] = 1

	for i := 1; i < n; i++ {
		nas := make([]int, a+1)
		nbs := make([]int, b+1)

		for j := 1; j <= a-1; j++ {
			nbs[1] = (nbs[1] + as[j]) % MOD
			nas[j+1] = (nas[j+1] + as[j]) % MOD
		}
		nbs[1] = (nbs[1] + as[a]) % MOD

		for j := 1; j <= b-1; j++ {
			nas[1] = (nas[1] + bs[j]) % MOD
			nbs[j+1] = (nbs[j+1] + bs[j]) % MOD
		}
		nas[1] = (nas[1] + bs[b]) % MOD

		as = nas
		bs = nbs
	}

	res := 0
	for j := 1; j <= a; j++ {
		res = (res + as[j]) % MOD
	}
	for j := 1; j <= b; j++ {
		res = (res + bs[j]) % MOD
	}
	fmt.Fprintln(bo, res)

	//fmt.Fprintln(bo, as)
	//fmt.Fprintln(bo, bs)
}
