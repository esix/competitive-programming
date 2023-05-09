# Sum of Remainders [⬀](https://codeforces.com/contest/616/problem/E)

Calculate the value of the sum: `n mod 1 + n mod 2 + n mod 3 + ... + n mod m`. As the result can be very large, you should print the value modulo `10⁹ + 7` (the remainder when divided by `10⁹ + 7`).

The modulo operator `a` mod `b` stands for the remainder after dividing `a` by `b`. For example `10 mod 3 = 1`.

## Input

The only line contains two integers `n`, `m` (`1 ≤ n, m ≤ 10¹³`) — the parameters of the sum.

## Output

Print integer `s` — the value of the required sum modulo `10⁹ + 7`.

## Examples

### input
```
3 4
```

### output
```
4
```

### input
```
4 4
```

### output
```
1
```

### input
```
1 1
```

### output
```
0
```

