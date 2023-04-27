# Lines [⬀](https://www.e-olymp.com/en/problems/1060)

In the table with n rows and n columns, some cells are occupied with balls, others are free. You choose a ball and a place where you want to move it. In one step the ball can be moved to the next horizontal or vertical empty cell. Determine, is it possible to move the ball from the initial cell to the given, and if it is possible, find a way with the minimum number of steps.

## Input

The first line contains integer n (2 ≤ n ≤ 40), each of the the next n lines contains n symbols. The empty cell is marked with a point, the ball on the table is marked with letter O, the initial position of a ball that must be moved - with @, and the place where the ball must be moved - with a letter X.

## Output

Print Y in the first line , if the path from the start to the end exists, or N otherwise. If the path exists, print N rows with N symbols like it is given at input, but symbol X and all points on the route must be changed to pluses.

_Time limit 1 second_

_Memory limit 122.17 MiB_

## Input example #1
```
5
....X
.OOOO
.....
OOOO.
@....
```

## Output example #1
```
Y
+++++
+OOOO
+++++
OOOO+
@++++
```

## Input example #2
```
5
..X..
.....
OOOOO
.....
..@..
```

## Output example #2
```
N
```

## Input example #3
```
5
...X.
.....
O.OOO
.....
....@
```

## Output example #3
```
Y
..++.
.++..
O+OOO
.++++
....@
```
