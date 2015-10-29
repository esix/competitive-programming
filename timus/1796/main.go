package main

import "fmt"

func main() {
	cs := []int{10, 50, 100, 500, 1000, 5000}
	ns := make([]int, len(cs))
	for i, _ := range ns {
		fmt.Scan(&ns[i])
	}
	var price int
	fmt.Scan(&price)

	sum := 0
	min_i := -1
	//max_i := -1

	for i, n := range ns {
		if n > 0 {
			if min_i == -1 {
				min_i = i
			}
			//max_i = i
			sum += n * cs[i]
		}
	}

	max_price := sum
	min_price := sum - cs[min_i]

	//fmt.Println("Money: ", min_price, max_price)

	max := max_price / price
	min := min_price / price
	if min < max {
		min++
	}

	//fmt.Println("Num: ", min, max)

	fmt.Println(max - min + 1)
	for i := min; i <= max; i++ {
		fmt.Print(i, " ")
	}
}
