# [Complete graph - 2](https://www.e-olymp.com/en/contests/9208/problems/80033)

Discussing the privacy of all kinds of villains, Graph Dooku was lost from our attention. Dooku in his free time likes to fold origami. He had systematized his knowledge in this area as follows: Graph knows n figures, and for some of them he knows how to get one from another. For beginners Dooku developed a special table. The cell [i, j] of the table contains "1", if Graph can get from figure i the figure j with one fold. Otherwise the cell contains "0". Initially Graph Dooku holds in the hands the clean sheet, that is the figure number x in his system, and he wants to make a crane – the figure number y.

Find in how many operations Graph will reach the desired figure.

## Input

First line contains number n (1 ≤ n ≤ 1000). Next n lines contain Dooku table. The (n + 1) - th line contains numbers x and y.

## Output

Print the minimum number of operations that Graph have to carry out. If the evil plans of Graph will fail, output "-1".

_Time limit 1 second_

_Memory limit 122.17 MiB_

## Input example #1
```
4
0 0 1 0
0 0 0 1
1 0 0 1
0 1 1 0
1 2
```

## Output example #1
```
3
```
