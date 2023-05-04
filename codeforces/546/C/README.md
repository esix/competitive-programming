# Soldier and Cards [⬀](https://codeforces.com/contest/546/problem/C)

Two bored soldiers are playing card war. Their card deck consists of exactly `n` cards, numbered from `1` to `n`, **all values are different**. They divide cards between them in some manner, it's possible that they have different number of cards. Then they play a "war"-like card game.

The rules are following. On each turn a fight happens. Each of them picks card from the top of his stack and puts on the table. The one whose card value is bigger wins this fight and takes both cards from the table to the bottom of his stack. More precisely, he first takes his opponent's card and puts to the bottom of his stack, and then he puts his card to the bottom of his stack. If after some turn one of the player's stack becomes empty, he loses and the other one wins.

You have to calculate how many fights will happen and who will win the game, or state that game won't end.

## Input

First line contains a single integer `n` (`2 ≤ n ≤ 10`), the number of cards.

Second line contains integer `k₁` (`1 ≤ k₁ ≤ n - 1`), the number of the first soldier's cards. Then follow `k₁` integers that are the values on the first soldier's cards, from top to bottom of his stack.

Third line contains integer `k₂` (`k₁ + k₂ = n`), the number of the second soldier's cards. Then follow `k₂` integers that are the values on the second soldier's cards, from top to bottom of his stack.

All card values are different.

## Output

If somebody wins in this game, print 2 integers where the first one stands for the number of fights before end of game and the second one is 1 or 2 showing which player has won.

If the game won't end and will continue forever output  `-1`.

## Examples

### input
```
4
2 1 3
2 4 2
```

### output
```
6 2
```

### input
```
3
1 2
2 1 3
```

### output
```
-1
```

## Note

### First sample:
![First sample](1.png)

### Second sample:

![Second sample](2.png)

