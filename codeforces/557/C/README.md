# Arthur and Table [⬀](https://codeforces.com/problemset/problem/557/C)

Arthur has bought a beautiful big table into his new flat. When he came home, Arthur noticed that the new table is unstable.

In total the table Arthur bought has `n` legs, the length of the `i`-th leg is `lᵢ`.

Arthur decided to make the table stable and remove some legs. For each of them Arthur determined number `dᵢ` — the amount of energy that he spends to remove the `i`-th leg.

A table with `k` legs is assumed to be stable if there are more than half legs of the maximum length. For example, to make a table with 5 legs stable, you need to make sure it has at least three (out of these five) legs of the maximum length. Also, a table with one leg is always stable and a table with two legs is stable if and only if they have the same lengths.

Your task is to help Arthur and count the minimum number of energy units Arthur should spend on making the table stable.

## Input

The first line of the input contains integer `n` (`1 ≤ n ≤ 10⁵`) — the initial number of legs in the table Arthur bought.

The second line of the input contains a sequence of `n` integers `lᵢ` (`1 ≤ lᵢ ≤ 10⁵`), where li is equal to the length of the `i`-th leg of the table.

The third line of the input contains a sequence of n integers `dᵢ` (`1 ≤ dᵢ ≤ 200`), where `dᵢ` is the number of energy units that Arthur spends on removing the `i`-th leg off the table.

## Output

Print a single integer — the minimum number of energy units that Arthur needs to spend in order to make the table stable.

## Examples

### input
```
2
1 5
3 2
```

### output
```
2
```

### input
```
3
2 4 4
1 1 1
```

### output
```
0
```

### input
```
6
2 2 1 1 3 3
4 3 5 5 2 1
```

### output
```
8
```
