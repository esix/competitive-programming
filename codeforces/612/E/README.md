# Square Root of Permutation [⬀](https://codeforces.com/contest/612/problem/E)

A permutation of length `n` is an array containing each integer from `1` to `n` exactly once. For example, `q = [4, 5, 1, 2, 3]` is a permutation. For the permutation `q` the square of permutation is the permutation `p` that `p[i] = q[q[i]]` for each `i = 1 ... n`. For example, the square of `q = [4, 5, 1, 2, 3]` is `p = q² = [2, 3, 4, 5, 1]`.

This problem is about the inverse operation: given the permutation `p` you task is to find such permutation `q` that `q² = p`. If there are several such `q` find any of them.

## Input

The first line contains integer `n` (`1 ≤ n ≤ 10⁶`) — the number of elements in permutation `p`.

The second line contains `n` distinct integers `p₁`, `p₂`, ..., `pₙ` (`1 ≤ pᵢ ≤ n`) — the elements of permutation `p`.

## Output

If there is no permutation `q` such that `q² = p` print the number "`-1`".

If the answer exists print it. The only line should contain `n` different integers `qᵢ` (`1 ≤ qᵢ ≤ n`) — the elements of the permutation `q`. If there are several solutions print any of them.

## Examples

### input
```
4
2 1 4 3
```

### output
```
3 4 2 1
```

### input
```
4
2 1 3 4
```

### output
```
-1
```

### input
```
5
2 3 4 5 1
```

### output
```
4 5 1 2 3
```
