# Three Logos [⬀](https://codeforces.com/problemset/problem/581/D)

Three companies decided to order a billboard with pictures of their logos. A billboard is a big square board. A logo of each company is a rectangle of a non-zero area.

Advertisers will put up the ad only if it is possible to place all three logos on the billboard so that they do not overlap and the billboard has no empty space left. When you put a logo on the billboard, you should rotate it so that the sides were parallel to the sides of the billboard.

Your task is to determine if it is possible to put the logos of all the three companies on some square billboard without breaking any of the described rules.

## Input

The first line of the input contains six positive integers `x₁`, `y₁`, `x₂`, `y₂`, `x₃`, `y₃` (`1 ≤ x₁, y₁, x₂, y₂, x₃, y₃ ≤ 100`), where `xᵢ` and `yᵢ` determine the length and width of the logo of the `i`-th company respectively.

## Output

If it is impossible to place all the three logos on a square shield, print a single integer "`-1`" (without the quotes).

If it is possible, print in the first line the length of a side of square `n`, where you can place all the three logos. Each of the next `n` lines should contain `n` uppercase English letters "`A`", "`B`" or "`C`". The sets of the same letters should form solid rectangles, provided that:

- the sizes of the rectangle composed from letters "`A`" should be equal to the sizes of the logo of the first company,
- the sizes of the rectangle composed from letters "`B`" should be equal to the sizes of the logo of the second company,
- the sizes of the rectangle composed from letters "`C`" should be equal to the sizes of the logo of the third company,

Note that the logos of the companies can be rotated for printing on the billboard. The billboard mustn't have any empty space. If a square billboard can be filled with the logos in multiple ways, you are allowed to print any of them.

See the samples to better understand the statement.

## Examples

### input
```
5 1 2 5 5 2
```

### output
```
5
AAAAA
BBBBB
BBBBB
CCCCC
CCCCC
```

### input
```
4 4 2 6 4 2
```

### output
```
6
BBBBBB
BBBBBB
AAAACC
AAAACC
AAAACC
AAAACC
```
