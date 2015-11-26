package main

import (
	"bufio"
	"fmt"
	"os"
)

/*
m^2 = n * k^3
m = sqrt( n * k^3 )
m = k * sqrt( n * k )
n * k - is square of some number
let n = p1^a1 * p2^a2  ... pn^a2: primes
let ai1,ai2,... are odd
if k = ai1 * ai2 * ... => n * k = multiplication of p's in even power => sqrt(n * k) is natural

*/

func factorize(n int) []int {
	primfac := make([]int, 0)
	for d := 2; d*d <= n; d++ {
		for n%d == 0 {
			primfac = append(primfac, d)
			n /= d
		}
	}
	if n > 1 {
		primfac = append(primfac, n)
	}
	return primfac
}

func main() {
	bi := bufio.NewReader(os.Stdin)
	bo := bufio.NewWriter(os.Stdout)
	defer bo.Flush()

	var n int
	fmt.Fscanln(bi, &n)

	factors := factorize(n)

	ps := make(map[int]int)
	for _, p := range factors {
		ps[p]++
	}

	k := 1
	m := int64(1)
	for p, a := range ps {
		if a%2 == 1 {
			k *= p
			m *= int64(p)
		}
		for i := 0; i < (a+1)/2; i++ {
			m *= int64(p)
		}
	}

	fmt.Fprintln(bo, m)
	fmt.Fprintln(bo, k)
}
