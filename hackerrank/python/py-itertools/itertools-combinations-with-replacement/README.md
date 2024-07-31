# itertools.combinations_with_replacement() [⬀](https://www.hackerrank.com/challenges/itertools-combinations-with-replacement)

[itertools.combinations_with_replacement(iterable, r)](https://docs.python.org/2/library/itertools.html#itertools.combinations_with_replacement)

This tool returns `r` length subsequences of elements from the input iterable allowing individual elements to be repeated more than once.

Combinations are emitted in lexicographic sorted order. So, if the input iterable is sorted, the combination tuples will be produced in sorted order.

#### Sample Code
```
>>> from itertools import combinations_with_replacement
>>> 
>>> print list(combinations_with_replacement('12345',2))
[('1', '1'), ('1', '2'), ('1', '3'), ('1', '4'), ('1', '5'), ('2', '2'), ('2', '3'), ('2', '4'), ('2', '5'), ('3', '3'), ('3', '4'), ('3', '5'), ('4', '4'), ('4', '5'), ('5', '5')]
>>> 
>>> A = [1,1,3,3,3]
>>> print list(combinations(A,2))
[(1, 1), (1, 3), (1, 3), (1, 3), (1, 3), (1, 3), (1, 3), (3, 3), (3, 3), (3, 3)]
```

## Task

You are given a string `S`.

Your task is to print all possible size `k` replacement combinations of the string in lexicographic sorted order.

## Input Format

A single line containing the string `S` and integer value `k` separated by a space.

## Constraints
- `0 < k ≤ len(S)`
- The string contains only UPPERCASE characters.

## Output Format

- Print the combinations with their replacements of string `S` on separate lines.

## Sample Input
```
HACK 2
```

## Sample Output
```
AA
AC
AH
AK
CC
CH
CK
HH
HK
KK
```
