# [Rock, Paper, or Scissors?](https://www.e-olymp.com/en/problems/1215)
Rock, Paper, Scissors is a two player game, where each player simultaneously chooses one of the three items after counting to three. The game typically lasts a pre-determined number of rounds. The player who wins the most rounds wins the game. Given the number of rounds the players will compete, it is your job to determine which player wins after those rounds have been played.

The rules for what item wins are as follows:

- Rock always beats Scissors (Rock crushes Scissors)
- Scissors always beat Paper (Scissors cut Paper)
- Paper always beats Rock (Paper covers Rock)

## Input
The first value will be an integer t (0 < t < 1000) representing the number of test cases. Following this, on a case by case basis, will be an integer n (0 < n < 100) specifying the number of rounds of Rock, Paper, Scissors played. Next will be n lines, each with either a capital R, P or S, followed by a space, followed by a capital R, P or S, followed by a newline. The first letter is Player 1's choice; the second letter is Player 2's choice.

## Output
For each test case, report the name of the player (Player 1 or Player 2) that wins the game, followed by a newline. If the game ends up in a tie, print TIE.

## Input example #1
```
3
2
R P
S R
3
P P
R S
S R
1
P R
```

## Output example #1
```
Player 2
TIE
Player 1
```
