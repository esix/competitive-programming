# Dice IV [⬀](https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_11_D)

Write a program which reads `n` dices constructed in the same way as Dice I, and determines whether they are all different. For the determination, use the same way as Dice III.

## Input
In the first line, the number of dices `n` is given. In the following `n`
 lines, six integers assigned to the dice faces are given respectively in the same way as Dice III.

## Output
Print "Yes" if given dices are all different, otherwise "No" in a line.

## Constraints
- 2 ≤ `n` ≤ 100
- 0 ≤ *the integer assigned to a face* ≤100

## Sample Input 1
```
3
1 2 3 4 5 6
6 2 4 3 5 1
6 5 4 3 2 1
```

## Sample Output 1
```
No
```

## Sample Input 2
```
3
1 2 3 4 5 6
6 5 4 3 2 1
5 4 3 2 1 6
```

## Sample Output 2
```
Yes
```
