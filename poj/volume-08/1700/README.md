# [Crossing River](http://poj.org/problem?id=1700)

## Description

A group of `N` people wishes to go across a river with only one boat, which can
at most carry two persons. Therefore some sort of shuttle arrangement must be
arranged in order to row the boat back and forth so that all people may cross.
Each person has a different rowing speed; the speed of a couple is determined by the speed of the slower one. Your job is to determine a strategy that minimizes the time for these people to get across.

## Input

The first line of the input contains a single integer `T` (`1 <= T <= 20`), the 
number of test cases. Then `T` cases follow. The first line of each case 
contains `N`, and the second line contains `N` integers giving the time for each
people to cross the river. Each case is preceded by a blank line. There won't be
more than `1000` people and nobody takes more than `100` seconds to cross.

## Output

For each test case, print a line containing the total number of seconds required for all the `N` people to cross the river.

### Sample Input
```
1
4
1 2 5 10
```

### Sample Output
```
17
```

## Source

POJ Monthly--2004.07.18
