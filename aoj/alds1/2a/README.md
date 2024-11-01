# Bubble Sort [⬀](https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_2_A)

Write a program of the Bubble Sort algorithm which sorts a sequence A in ascending order. The algorithm should be based on the following pseudocode:

```
BubbleSort(A)
1 for i = 0 to A.length-1
2     for j = A.length-1 downto i+1
3         if A[j] < A[j-1]
4             swap A[j] and A[j-1]
```

Note that, indices for array elements are based on 0-origin.

Your program should also print the number of swap operations defined in line 4 of the pseudocode.

## Input

The first line of the input includes an integer `N`, the number of elements in the sequence.

In the second line, `N` elements of the sequence are given separated by spaces characters.

## Output

The output consists of 2 lines.

In the first line, please print the sorted sequence. Two contiguous elements of the sequence should be separated by a space character.

In the second line, please print the number of swap operations.

## Constraints
- 1 ≤ `N` ≤ 100


## Sample Input 1
```
5
5 3 2 4 1
```

## Sample Output 1
```
1 2 3 4 5
8
```

## Sample Input 2
```
6
5 2 4 6 1 3
```

## Sample Output 2
```
1 2 3 4 5 6
9
```
