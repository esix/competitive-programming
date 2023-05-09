# Comparing Two Long Integers [⬀](https://codeforces.com/contest/616/problem/A)

You are given two very long integers `a`, `b` (leading zeroes are allowed). You should check what number `a` or `b` is greater or determine that they are equal.

The input size is very large so don't use the reading of symbols one by one. Instead of that use the reading of a whole line or token.

As input/output can reach huge size it is recommended to use fast input/output methods: for example, prefer to use `scanf`/`printf` instead of `cin`/`cout` in `C++`, prefer to use `BufferedReader`/`PrintWriter` instead of `Scanner`/`System.out` in `Java`. Don't use the function `input()` in Python2 instead of it use the function `raw_input()`.

## Input

The first line contains a non-negative integer `a`.

The second line contains a non-negative integer `b`.

The numbers `a`, `b` may contain leading zeroes. Each of them contains no more than `10⁶` digits.

## Output

Print the symbol "`<`" if `a < b` and the symbol "`>`" if `a > b`. If the numbers are equal print the symbol "`=`".

## Examples

### input
```
9
10
```

### output
```
<
```

### input
```
11
10
```

### output
```
>
```

### input
```
00012345
12345
```

### output
```
=
```

### input
```
0123
9
```

### output
```
>
```

### input
```
0123
111
```

### output
```
>
```

