# Dice III [⬀](https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_11_C)

Write a program which reads the two dices constructed in the same way as Dice I, and determines whether these two dices are identical. You can roll a dice in the same way as Dice I, and if all integers observed from the six directions are the same as that of another dice, these dices can be considered as identical.

## Input
- In the first line, six integers assigned to faces of a dice are given in ascending order of their corresponding labels.
- In the second line, six integers assigned to faces of another dice are given in ascending order of their corresponding labels.

## Output
Print "`Yes`" if two dices are identical, otherwise "`No`" in a line.

## Constraints
- 0 ≤ *the integer assigned to a face* ≤ 100

## Sample Input 1
```
1 2 3 4 5 6
6 2 4 3 5 1
```

## Sample Output 1
```
Yes
```

## Sample Input 2
```
1 2 3 4 5 6
6 5 4 3 2 1
```

## Sample Output 2
```
No
```
