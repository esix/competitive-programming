package main

import (
	"bufio"
	"fmt"
	"os"
	"io"
)

type Martian struct {
  Parents []*Martian
	Visited bool
	Idx int
}

func (m *Martian) Visit(bo io.Writer){
	if m.Visited {
		return
	}
	m.Visited = true
	for _, p := range m.Parents {
		p.Visit(bo)
	}
	fmt.Fprint(bo, m.Idx, " ")
}

func main() {
	bi := bufio.NewReader(os.Stdin)
	bo := bufio.NewWriter(os.Stdout)
	defer bo.Flush()

	var n int
	fmt.Fscanln(bi, &n)

	ms := make([]Martian, n)

	for i := 0; i < n; i++ {
		ms[i].Idx = i + 1
		for true {
			var ci int
			fmt.Fscan(bi, &ci)
			if ci == 0 {
				break
			}
			ci--
			ms[ci].Parents = append(ms[ci].Parents, &ms[i])
		}
	}

	for i := 0; i < n; i++ {
		ms[i].Visit(bo)
	}
}
