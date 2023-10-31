# Beautiful Triplets [⬀](https://www.hackerrank.com/challenges/beautiful-triplets)

Given a sequence of integers `a`, a triplet `(a[i], a[j], a[k])` is beautiful if:
- `i < j < k`
- `a[j] - a[i] = a[k] - a[j] = d`

Given an increasing sequenc of integers and the value of `d`, count the number of beautiful triplets in the sequence.

## Example
```
arr = [2, 2, 3, 4, 5]
d = 1
```

There are three beautiful triplets, by index: `[i, j, k] = [0, 2, 3], [1, 2, 3], [2, 3, 4]`. To test the first triplet, `arr[j] - arr[i] = 3 - 2 = 1` and `arr[k] - arr[j] = 4 - 3 = 1`.

## Function Description

Complete the `beautifulTriplets` function in the editor below.

`beautifulTriplets` has the following parameters:

- `int d`: the value to match
- `int arr[n]`: the sequence, sorted ascending

## Returns

- `int`: the number of beautiful triplets

## Input Format

The first line contains `2` space-separated integers, `n` and `d`, the length of the sequence and the beautiful difference.

The second line contains `n` space-separated integers `arr[i]`.

## Constraints
- `1 ≤ n ≤ 10⁴`
- `1 ≤ d ≤ 20`
- `0 ≤ arr[i] ≤ 2×10⁴`
- `arr[i] > arr[i - 1]`

## Sample Input
```
STDIN           Function
-----           --------
7 3             arr[] size n = 7, d = 3
1 2 4 5 7 8 10  arr = [1, 2, 4, 5, 7, 8, 10]
```

## Sample Output
```
3
```

## Explanation

There are many possible triplets `(arr[i], arr[j], arr[k])`, but our only beautiful triplets are `(1, 4, 7)`, `(4, 7, 10)` and `(2, 5, 8)` by value, not index. Please see the equations below:
- `7 - 4 = 4 - 1 = 3 = d`
- `10 - 7 = 7 - 4 = 3 = d`
- `8 - 5 = 5 - 2 = 3 = d`

Recall that a beautiful triplet satisfies the following equivalence relation:  

`arr[j] - arr[i] = arr[k] - arr[j] = d` where `i < j < k`.
