# [Ugly Number III](https://leetcode.com/problems/ugly-number-iii/)

An **ugly number** is a positive integer that is divisible by `a`, `b`, or `c`.

Given four integers `n`, `a`, `b`, and `c`, return the `nᵗʰ` **ugly number**.


### Example 1:
```
Input: n = 3, a = 2, b = 3, c = 5
Output: 4
Explanation: The ugly numbers are 2, 3, 4, 5, 6, 8, 9, 10... The 3rd is 4.
```

### Example 2:
```
Input: n = 4, a = 2, b = 3, c = 4
Output: 6
Explanation: The ugly numbers are 2, 3, 4, 6, 8, 9, 10, 12... The 4th is 6.
```

### Example 3:
```
Input: n = 5, a = 2, b = 11, c = 13
Output: 10
Explanation: The ugly numbers are 2, 4, 6, 8, 10, 11, 12, 13... The 5th is 10.
```

### Example 4:
```
Input: n = 1000000000, a = 2, b = 217983653, c = 336916467
Output: 1999999984
```


### Constraints:

- `1 <= n, a, b, c <= 10⁹`
- `1 <= a * b * c <= 10¹⁸`
- It is guaranteed that the result will be in range `[1, 2 * 10⁹]`.
