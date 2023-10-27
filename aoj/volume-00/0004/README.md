# Simultaneous Equation [⬀](https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0004)

Write a program which solve a simultaneous equation:
```
ax+by=c
dx+ey=f
```

The program should print `x` and `y` for given `a`, `b`, `c`, `d`, `e` and `f` (`-1,000 ≤ a,b,c,d,e,f ≤ 1,000`). You can suppose that given equation has a unique solution.

## Input

The input consists of several data sets, 1 line for each data set. In a data set, there will be `a`,`b`,`c`,`d`,`e`,`f` separated by a single space. The input terminates with EOF.

## Output

For each data set, print `x` and `y` separated by a single space. Print the solution to three places of decimals. Round off the solution to three decimal places.

## Sample Input 1
```
1 2 3 4 5 6
2 -1 -2 -1 -1 -5
```

## Output for the Sample Input 1
```
-1.000 2.000
1.000 4.000
```

## Sample Input 2
```
2 -1 -3 1 -1 -3
2 -1 -3 -9 9 27
```

## Output for the Sample Input 2
```
0.000 3.000
0.000 3.000
```
