# Maximize It! [⬀](https://www.hackerrank.com/challenges/maximize-it)

You are given a function `f(X) = X²`. You are also given `K` lists. The `iᵗʰ` list consists of `Nᵢ` elements.

You have to pick one element from each list so that the value from the equation below is maximized:

`S = (f(X₁) + f(X₂) + ... + f(Xₖ)) % M`

`Xᵢ` denotes the element picked from the `iᵗʰ` list . Find the maximized value `Sₘₐₓ` obtained.

`%` denotes the modulo operator.

Note that you need to take exactly one element from each list, not necessarily the largest element. You add the squares of the chosen elements and perform the modulo operation. The maximum value that you can obtain, will be the answer to the problem.

## Input Format

- The first line contains `2` space separated integers `K` and `M`.
- The next `K` lines each contains an integer `Nᵢ`, denoting the number of elements in the `iᵗʰ` list, followed by `Nᵢ` space separated integers denoting the elements in the list.

## Constraints
- `1 ≤ K ≤ 7`
- `1 ≤ M ≤ 1000` 
- `1 ≤ Nᵢ ≤ 7`
- `1 ≤ Magnitude of elements in list ≤ 10⁹`

## Output Format

Output a single integer denoting the value `Sₘₐₓ`.

## Sample Input
```
3 1000
2 5 4
3 7 8 9 
5 5 7 8 9 10 
```

## Sample Output
```
206
```

## Explanation

Picking `5` from the `1ˢᵗ` list, `9` from the `2ⁿᵈ` list and `10` from the `3ʳᵈ` list gives the maximum `S` value equal to `(5² + 9² + 10²) % 1000 = 206`.