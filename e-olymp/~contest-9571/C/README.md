# Replacement [⬀](https://www.e-olymp.com/en/contests/9571/problems/83969)
Given a sequence of n positive integers. You must replace each element with the next nearest one (with a larger index) that is strictly larger than its value. If there is no larger element, replace this element with zero.

## Input
First line contains the number of elements n (1 ≤ n ≤ 10⁵). Second line contains n positive integers ai (ai ≤ 10⁹) - the values of sequence elements.

## Output
Print the desired sequence, separating the neighboring elements with a single space.

## Input example #1
```
6
1 2 3 1 1 5
```

## Output example #1
```
2 3 5 5 5 0
```

## Input example #2
```
5
1 2 3 4 5
```

## Output example #2
```
2 3 4 5 0
```
