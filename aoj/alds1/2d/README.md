# Shell Sort [⬀](https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_2_D)

Shell Sort is a generalization of Insertion Sort (ALDS1_1_A) to arrange a list 
of `n` elements `A`.

```
1  insertionSort(A, n, g)
2      for i = g to n-1
3          v = A[i]
4          j = i - g
5          while j >= 0 && A[j] > v
6              A[j+g] = A[j]
7              j = j - g
8              cnt++
9          A[j+g] = v
10
11 shellSort(A, n)
12     cnt = 0
13     m = ?
14     G[] = {?, ?,..., ?}
15     for i = 0 to m-1
16         insertionSort(A, n, G[i])
```

A function `shellSort(A, n)` performs a function `insertionSort(A, n, g)`, 
which considers every `g`-th elements. Beginning with large values of `g`, it 
repeats the insertion sort with smaller `g`.

Your task is to complete the above program by filling `?`. Write a program which 
reads an integer `n` and a sequence `A`, and prints `m`, `Gᵢ` (`i` = 0, 1, ..., `m`−1)
 in the pseudo code and the sequence `A` in ascending order. The output of your 
 program must meet the following requirements:

- 1 ≤ `m` ≤ 100
- 0 ≤ `Gᵢ` ≤ `n`
- cnt does not exceed <code>⌈n<sup>1.5</sup>⌉</code>

## Input
In the first line, an integer `n` is given. In the following `n` lines, `Aᵢ` 
(i = 0, 1, ..., `n`−1) are given for each line.

## Output

- In the first line, print an integer `m`. 
- In the second line, print `m` integers `Gᵢ` (i = 0, 1,...,`m`−1) separated by 
single space character in a line.
- In the third line, print `cnt` in a line. In the following `n` lines, print Aᵢ (i = 0, 1, ..., `n`−1) respectively.

This problem has multiple solutions and the judge will be performed by a special validator.

## Constraints
- 1 ≤ `n` ≤ 1,000,000
- 0 ≤ `Aᵢ` ≤ 10⁹

## Sample Input 1
```
5
5
1
4
3
2
```

## Sample Output 1
```
2
4 1
3
1
2
3
4
5
```

## Sample Input 2
```
3
3
2
1
```

## Sample Output 2
```
1
1
3
1
2
3
```
