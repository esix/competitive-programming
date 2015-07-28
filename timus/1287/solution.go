package main

import (
	"fmt"
)

const s = 0
const S = 1

type Cell struct {
	s_type int
	ee_len int
	se_len int
	ss_len int
	sw_len int
}

func main() {
	var N int
	fmt.Scan(&N)

	os1 := make([]Cell, N)
	os2 := make([]Cell, N)

	// 2 array pointers
	os := &os1
	new_os := &os2

	result_s := 0
	result_S := 0

	for row := 0; row < N; row++ {
		var l string
		fmt.Scan(&l)

		for col := 0; col < N; col++ {
			var ww, nw, nn, ne *Cell
			if col > 0 {
				ww = &(*new_os)[col-1]
			}
			if col > 0 && row > 0 {
				nw = &(*os)[col-1]
			}
			if row > 0 {
				nn = &(*os)[col]
			}
			if col < N-1 && row > 0 {
				ne = &(*os)[col+1]
			}

			// create next item
			(*new_os)[col] = Cell{s_type: s, ee_len: 1, se_len: 1, ss_len: 1, sw_len: 1}
			cell := &(*new_os)[col] // save pointer to new item

			if l[col] == 'S' {
				cell.s_type = S
			}

			if ww != nil && ww.s_type == cell.s_type {
				cell.ee_len += ww.ee_len
			}
			if nw != nil && nw.s_type == cell.s_type {
				cell.se_len += nw.se_len
			}
			if nn != nil && nn.s_type == cell.s_type {
				cell.ss_len += nn.ss_len
			}
			if ne != nil && ne.s_type == cell.s_type {
				cell.sw_len += ne.sw_len
			}

			if cell.s_type == s {
				if cell.ee_len > result_s {
					result_s = cell.ee_len
				}
				if cell.se_len > result_s {
					result_s = cell.se_len
				}
				if cell.ss_len > result_s {
					result_s = cell.ss_len
				}
				if cell.sw_len > result_s {
					result_s = cell.sw_len
				}
			} else {
				if cell.ee_len > result_S {
					result_S = cell.ee_len
				}
				if cell.se_len > result_S {
					result_S = cell.se_len
				}
				if cell.ss_len > result_S {
					result_S = cell.ss_len
				}
				if cell.sw_len > result_S {
					result_S = cell.sw_len
				}
			}
		}
		os, new_os = new_os, os
	}

	if result_S == result_s {
		fmt.Println("?")
		fmt.Println(result_s)
	}
	if result_s > result_S {
		fmt.Println("s")
		fmt.Println(result_s)
	}
	if result_S > result_s {
		fmt.Println("S")
		fmt.Println(result_S)
	}

}
