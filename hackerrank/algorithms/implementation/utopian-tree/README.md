# Utopian Tree [⬀](https://www.hackerrank.com/challenges/utopian-tree)


The Utopian Tree goes through 2 cycles of growth every year. Each spring, it doubles in height. Each summer, its height increases by 1 meter.

A Utopian Tree sapling with a height of 1 meter is planted at the onset of spring. How tall will the tree be after `n` growth cycles?

For example, if the number of growth cycles is `n = 5`, the calculations are as follows:
```
Period  Height
0          1
1          2
2          3
3          6
4          7
5          14
```

## Function Description

Complete the `utopianTree` function in the editor below.

`utopianTree` has the following parameter(s):

- `int n`: the number of growth cycles to simulate

## Returns

- `int`: the height of the tree after the given number of cycles


## Input Format

The first line contains an integer, `t`, the number of test cases.

`t` subsequent lines each contain an integer, `n`, the number of cycles for that test case.

## Constraints
- `1 ≤ t ≤ 10`
- `1 ≤ n ≤ 60`


## Sample Input
```
3
0
1
4
```

## Sample Output
```
1
2
7
```

## Explanation

There are 3 test cases.

In the first case (`n = 0`), the initial height (`H = 1`) of the tree remains unchanged.

In the second case (`n = 1`), the tree doubles in height and is `2` meters tall after the spring cycle.

In the third case (`n = 4`), the tree doubles its height in spring (`n = 1`, `H = 2`), then grows a meter in summer (`n = 2`, `H = 3`), then doubles after the next spring (`n = 3`, `H = 6`), and grows another meter after summer (`n = 4`, `H = 7`). Thus, at the end of 4 cycles, its height is `7` meters.