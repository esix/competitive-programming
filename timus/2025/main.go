package main

import "fmt"

func main() {
	var T int
	fmt.Scanln(&T)

	for t := 0; t < T; t++ {
		var n, k int
		fmt.Scanln(&n, &k)
		cmds_extra := n % k

		var res int64
		for i := 0; i < k; i++ {
			in_cmd := n / k
			if i < cmds_extra {
				in_cmd += 1
			}
			res += int64(in_cmd) * int64(n - in_cmd)
		}
		fmt.Println(res / 2)
	}
}
