# Selection Sort [⬀](https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_2_B)

Write a program of the Selection Sort algorithm which sorts a sequence `A` in ascending order. The algorithm should be based on the following pseudocode:

```
SelectionSort(A)
1 for i = 0 to A.length-1
2     mini = i
3     for j = i to A.length-1
4         if A[j] < A[mini]
5             mini = j
6     swap A[i] and A[mini]
```

Note that, indices for array elements are based on `0`-origin.

Your program should also print the number of swap operations defined in line 6 of the pseudocode in the case where `i` ≠ `mini`.

## Input

The first line of the input includes an integer `N`, the number of elements in the sequence.

In the second line, `N` elements of the sequence are given separated by space characters.

## Output

The output consists of 2 lines.

In the first line, please print the sorted sequence. Two contiguous elements of the sequence should be separated by a space character.

In the second line, please print the number of swap operations.

## Constraints

- 1 ≤ `N` ≤ 100

## Sample Input 1
```
6
5 6 4 2 1 3
```

## Sample Output 1
```
1 2 3 4 5 6
4
```

## Sample Input 2
```
6
5 2 4 6 1 3
```

## Sample Output 2
```
1 2 3 4 5 6
3
```
