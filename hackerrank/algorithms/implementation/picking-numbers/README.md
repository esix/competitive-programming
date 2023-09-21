# Picking Numbers [⬀](https://www.hackerrank.com/challenges/picking-numbers)

Given an array of integers, find the longest subarray where the absolute difference between any two elements is less than or equal to `1`.

## Example
```
a = [1, 1, 2, 2, 4, 4, 5, 5, 5]
```


There are two subarrays meeting the criterion: `[1, 1, 2, 2]` and `[4, 4, 5, 5, 5]`. The maximum length subarray has `5` elements.

## Function Description

Complete the `pickingNumbers` function in the editor below.

`pickingNumbers` has the following parameter(s):

- `int a[n]`: an array of integers

## Returns

- `int`: the length of the longest subarray that meets the criterion

## Input Format

The first line contains a single integer `n`, the size of the array `a`.

The second line contains `n` space-separated integers, each an `a[i]`.

## Constraints
- `2 ≤ n ≤ 100`
- `0 < a[i] < 100`
- The answer will be `≥ 2`.

## Sample Input 0
```
6
4 6 5 3 3 1
```

## Sample Output 0
```
3
```

## Explanation 0

We choose the following multiset of integers from the array: `{4, 3, 3}`. Each pair in the multiset has an absolute difference `≤ 1` (i.e., `|4 - 3| = 1` and `|3 - 3| = 0`), so we print the number of chosen integers, `3`, as our answer.

## Sample Input 1
```
6
1 2 2 3 1 2
```

## Sample Output 1
```
5
```

## Explanation 1

We choose the following multiset of integers from the array: `{1, 2, 2, 1, 2}`. Each pair in the multiset has an absolute difference  (i.e., , , and ), so we print the number of chosen integers, , as our answer.
