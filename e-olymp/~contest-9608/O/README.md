# [Thaw](https://www.e-olymp.com/en/contests/9608/problems/84258)
Tired of the unusually warm winter the residents of Sudislavl decided to find out whether this is a long thaw in the history of weather observations. They appealed to the forecasters, and those, in turn, do research statistics for previous years. They are interested in how many days it lasted the longest thaw.

The thaw is a period when the daily average temperature exceeds 0 degrees Celsius. Write a program that helps forecasters to work.

## Input
First given the number of observed days n (1 ≤ n ≤ 100). The next line gives n integers. Each number is the average temperature on the corresponding day. Temperatures are integers in the range from -50 to 50.

## Output
Print one number - the length of the longest thaw, which is the largest number of consecutive days during which the average daily temperature exceeded 0 degrees. If each day the temperature was non-positive, output 0.

## Input example #1
```
6
-20 30 -40 50 10 -10
```

## Output example #1
```
2
```

## Input example #2
```
8
10 20 30 1 -10 1 2 3
```

## Output example #2
```
4
```

## Input example #3
```
5
-10 0 -10 0 -10
```

## Output example #3
```
0
```
