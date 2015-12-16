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

	// primes to 10000
	primes := make([]int, 0)
	es := make([]bool, 10000) // eratosthenes
	i := 2
	for i < len(es) {
		if !es[i] {
			primes = append(primes, i)
			for j := 0; j < len(es); j += i {
				es[j] = true
			}
		}
		i++
	}

	divs := make(map[int]int) // prime divisors of product all numbers

	for i := 0; i < 10; i++ {
		var a int
		fmt.Fscanln(bi, &a)
		for _, p := range primes {
			aa := a
			for aa%p == 0 {
				aa /= p
				divs[p]++
			}
		}
	}

	number_of_divisors := 1 // = prod(ei+1), N=p0^e0*p1^e1*...
	for _, e := range divs {
		number_of_divisors *= e + 1
	}

	fmt.Fprintln(bo, number_of_divisors%10)
}
