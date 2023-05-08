# Igor In the Museum [⬀](https://codeforces.com/problemset/problem/598/D)

Igor is in the museum and he wants to see as many pictures as possible.

Museum can be represented as a rectangular field of `n × m` cells. Each cell is either empty or impassable. Empty cells are marked with '`.`', impassable cells are marked with '`*`'. Every two adjacent cells of different types (one empty and one impassable) are divided by a wall containing one picture.

At the beginning Igor is in some empty cell. At every moment he can move to any empty cell that share a side with the current one.

For several starting positions you should calculate the maximum number of pictures that Igor can see. Igor is able to see the picture only if he is in the cell adjacent to the wall with this picture. Igor have a lot of time, so he will examine every picture he can see.

## Input

First line of the input contains three integers `n`, `m` and `k` (`3 ≤ n, m ≤ 1000`, `1 ≤ k ≤ min(n·m, 100 000)`) — the museum dimensions and the number of starting positions to process.

Each of the next `n` lines contains `m` symbols '`.`', '`*`' — the description of the museum. It is guaranteed that all border cells are impassable, so Igor can't go out from the museum.

Each of the last `k` lines contains two integers `x` and `y` (`1 ≤ x ≤ n`, `1 ≤ y ≤ m`) — the row and the column of one of Igor's starting positions respectively. Rows are numbered from top to bottom, columns — from left to right. It is guaranteed that all starting positions are empty cells.

## Output

Print `k` integers — the maximum number of pictures, that Igor can see if he starts in corresponding position.

## Examples

### input
```
5 6 3
******
*..*.*
******
*....*
******
2 2
2 5
4 3
```

### output
```
6
4
10
```

### input
```
4 4 1
****
*..*
*.**
****
3 2
```

### output
```
8
```
