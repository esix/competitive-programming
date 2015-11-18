package main

import "fmt"

type Tree struct {
	Left  *Tree
	Value int
	Right *Tree
}

func insert(t *Tree, v int) *Tree {
	if t == nil {
		return &Tree{nil, v, nil}
	}
	if v < t.Value {
		t.Left = insert(t.Left, v)
		return t
	}
	t.Right = insert(t.Right, v)
	return t
}

func printTreeRLT(t *Tree) {
	if t == nil {
		return
	}
	printTreeRLT(t.Right)
	printTreeRLT(t.Left)
	fmt.Println(t.Value)
}

func main() {
	var n int
	fmt.Scanln(&n)

	a := make([]int, n)
	for i := 0; i < n; i++ {
		fmt.Scanln(&a[i])
	}

	var t *Tree

	for i := n - 1; i >= 0; i-- {
		t = insert(t, a[i])
	}

	printTreeRLT(t)
}
