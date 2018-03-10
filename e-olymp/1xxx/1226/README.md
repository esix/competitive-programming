# [Foreign Exchange](https://www.e-olymp.com/en/problems/1226)

Your non-profit organization (iCORE - international Confederation of Revolver Enthusiasts) coordinates a very successful foreign student exchange program. Over the last few years, demand has sky-rocketed and now you need assistance with your task.

The program your organization runs works as follows: All candidates are asked for their original location and the location they would like to go to. The program works out only if every student has a suitable exchange partner. In other words, if a student wants to go from A to B, there must be another student who wants to go from B to A. This was an easy task when there were only about 10 candidates, however now there are up to 100001 candidates!


## Input

The first line contains the number of tests t. The first line of each test contains the number of candidates n (1 ≤ n ≤ 100001). Next n lines represent the exchange information for each candidate. Each of these lines contains two integers, separated by a single space, representing the candidate's original location and the candidate's target location respectively. Locations will be represented by nonnegative integer numbers, not greater than 109. You may assume that no candidate will have his or her original location being the same as his or her target location as this would fall into the domestic exchange program.

## Output

For each test case in a separate line print "YES" if there is a way for the exchange program to work out, or "NO" otherwise.

## Input example
```
2
10
1 2
2 1
3 4
4 3
100 200
200 100
57 2
2 57
1 2
2 1
10
1 2
3 4
5 6
7 8
9 10
11 12
13 14
15 16
17 18
19 20
```

## Output example
```
YES
NO
```
