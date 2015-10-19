package main

import "fmt"


func read_cell(c []string, l []string) string {
	res := ""
	for i := 0; i < 4; i++ {
		for j := 0; j < 4; j++ {
			if c[i][j] == 'X' {
				res += string(l[i][j])
			}
		}
	}
	return res
}


func rotate_cell(l []string) []string {
	res := make([]string, 4)
	for i := 0; i < 4; i++ {
		res[i] = ""
		for j := 0; j < 4; j++ {
			res[i] += string(l[3-j][i])
		}
	}
	return res
}


func main() {
	c := make([]string, 4)
	for i := 0; i < 4; i++ {
		fmt.Scan(&c[i])
	}

	l := make([]string, 4)
	for i := 0; i < 4; i++ {
		fmt.Scan(&l[i])
	}

	res := read_cell(c, l)
	c = rotate_cell(c)
	res += read_cell(c, l)
	c = rotate_cell(c)
	res += read_cell(c, l)
	c = rotate_cell(c)
	res += read_cell(c, l)

	fmt.Println(res)
}
