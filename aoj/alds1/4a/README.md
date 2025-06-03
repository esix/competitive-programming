# Linear Search [⬀](https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_4_A)

## Search I
You are given a sequence of `n` integers `S` and a sequence of different `q` integers `T`. Write a program which outputs `C`, the number of integers in `T` which are also in the set `S`.

## Input
In the first line `n` is given. In the second line, `n` integers are given. In the third line `q` is given. Then, in the fourth line, `q` integers are given.

## Output
Print `C` in a line.

## Constraints
- `n` ≤ 10000
- `q` ≤ 500
- 0 ≤ an element in `S` ≤ 10⁹
- 0 ≤ an element in `T` ≤ 10⁹

## Sample Input 1
```
5
1 2 3 4 5
3
3 4 1
```

## Sample Output 1
```
3
Sample Input 2
3
3 1 2
1
5
```

## Sample Output 2
```
0
```

## Sample Input 3
```
5
1 1 2 2 3
2
1 2
```

## Sample Output 3
```
2
```
