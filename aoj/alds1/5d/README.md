# The Number of Inversions [⬀](https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_5_D)

For a given sequence `A` = {`a₀`, `a₁`, ... `aₙ₋₁`}, the number of pairs `(i,j)` 
where `aᵢ > aⱼ` and `i < j`, is called the number of inversions. The number of 
inversions is equal to the number of swaps of Bubble Sort defined in the following 
program:
```
bubbleSort(A)
  cnt = 0 // the number of inversions
  for i = 0 to A.length-1
    for j = A.length-1 downto i+1
      if A[j] < A[j-1]
	swap(A[j], A[j-1])
	cnt++

  return cnt
```

For the given sequence `A`, print the number of inversions of `A`. Note that you 
should not use the above program, which brings Time Limit Exceeded.

## Input
In the first line, an integer `n`, the number of elements in `A`, is given. In 
the second line, the elements `aᵢ` (`i` = 0,1,..`n`−1) are given separated by 
space characters.

## Output
Print the number of inversions in a line.

## Constraints
- 1 ≤ `n` ≤ 200,000
- 0 ≤ `aᵢ` ≤ 10⁹
- `aᵢ` are all different

## Sample Input 1
```
5
3 5 2 1 4
```

## Sample Output 1
```
6
```

## Sample Input 2
```
3
3 1 2
```

## Sample Output 2
```
2
```
