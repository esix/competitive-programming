# [Tournament](https://www.e-olymp.com/en/problems/3002)
Two players started a darts tournament. The tournament is a series of n games. In each game, participants perform a number of shots, gaining points. The game is considered won by the player who scored more points in it than the opponent. If the players scored an equal number of points in the game, then its outcome is considered to be a draw. The winner of the tournament is the one who get the most wins.

Write a program that determines the winner of the tournament.

## Input
First line contains the number of games n (1 ≤ n ≤ 1000) in the tournament. Each of the next n lines contains two integers - the number of points gained by the first and second player. All numbers are nonnegative integers no more than 1000.

## Output
Print number 1 if the winner is the first player, 2 if the winner is the second player, and 0 in the case of a tie.

## Input example #1
```
3
3 1
1 0
1 2
```

## Output example #1
```
1
```

## Input example #2
```
2
1 1
0 5
```

## Output example #2
```
2
```
