# Lomsat gelral [⬀](https://codeforces.com/problemset/problem/600/E)

You are given a rooted tree with root in vertex `1`. Each vertex is coloured in some colour.

Let's call colour `c` dominating in the subtree of vertex `v` if there are no other colours that appear in the subtree of vertex v more times than colour `c`. So it's possible that two or more colours will be dominating in the subtree of some vertex.

The subtree of vertex `v` is the vertex `v` and all other vertices that contains vertex `v` in each path to the root.

For each vertex `v` find the sum of all dominating colours in the subtree of vertex `v`.

## Input

The first line contains integer `n` (`1 ≤ n ≤ 10⁵`) — the number of vertices in the tree.

The second line contains `n` integers `cᵢ` (`1 ≤ cᵢ ≤ n`), `cᵢ` — the colour of the `i`-th vertex.

Each of the next `n - 1` lines contains two integers `xⱼ`, `yⱼ` (`1 ≤ xⱼ, yⱼ ≤ n`) — the edge of the tree. The first vertex is the root of the tree.

## Output

Print `n` integers — the sums of dominating colours for each vertex.

## Examples

### input
```
4
1 2 3 4
1 2
2 3
2 4
```

### output
```
10 9 3 4
```

### input
```
15
1 2 3 1 2 3 3 1 1 3 2 2 1 2 3
1 2
1 3
1 4
1 14
1 15
2 5
2 6
2 7
3 8
3 9
3 10
4 11
4 12
4 13
```

### output
```
6 5 4 3 2 3 3 1 1 3 2 2 1 2 3
```
