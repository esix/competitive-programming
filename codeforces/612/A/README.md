# The Text Splitting [⬀](https://codeforces.com/contest/612/problem/A)

You are given the string `s` of length n and the numbers `p`, `q`. Split the string `s` to pieces of length `p` and `q`.

For example, the string "`Hello`" for `p = 2`, `q = 3` can be split to the two strings "`Hel`" and "`lo`" or to the two strings "`He`" and "`llo`".

Note it is allowed to split the string `s` to the strings only of length `p` or to the strings only of length `q` (see the second sample test).

## Input

The first line contains three positive integers `n`, `p`, `q` (`1 ≤ p, q ≤ n ≤ 100`).

The second line contains the string s consists of lowercase and uppercase latin letters and digits.

## Output

If it's impossible to split the string s to the strings of length p and q print the only number "`-1`".

Otherwise in the first line print integer `k` — the number of strings in partition of `s`.

Each of the next `k` lines should contain the strings in partition. Each string should be of the length `p` or `q`. The string should be in order of their appearing in string `s` — from left to right.

If there are several solutions print any of them.

## Examples

### input
```
5 2 3
Hello
```

### output
```
2
He
llo
```

### input
```
10 9 5
Codeforces
```

### output
```
2
Codef
orces
```

### input
```
6 4 5
Privet
```

### output
```
-1
```

### input
```
8 1 1
abacabac
```

### output
```
8
a
b
a
c
a
b
a
c
```
