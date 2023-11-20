# Finding Missing Cards [⬀](https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_6_B)


Taro is going to play a card game. However, now he has only n cards, even though there should be 52 cards (he has no Jokers).

The 52 cards include 13 ranks of each of the four suits: spade, heart, club and diamond.

## Input

In the first line, the number of cards `n` (`n ≤ 52`) is given.

In the following `n` lines, data of the `n` cards are given. Each card is given by a pair of a character and an integer which represent its suit and rank respectively. A suit is represented by '`S`', '`H`', '`C`' and '`D`' for spades, hearts, clubs and diamonds respectively. A rank is represented by an integer from 1 to 13.

## Output
Print the missing cards. The same as the input format, each card should be printed with a character and an integer separated by a space character in a line. Arrange the missing cards in the following priorities:

- Print cards of spades, hearts, clubs and diamonds in this order.
- If the suits are equal, print cards with lower ranks first.

## Sample Input
```
47
S 10
S 11
S 12
S 13
H 1
H 2
S 6
S 7
S 8
S 9
H 6
H 8
H 9
H 10
H 11
H 4
H 5
S 2
S 3
S 4
S 5
H 12
H 13
C 1
C 2
D 1
D 2
D 3
D 4
D 5
D 6
D 7
C 3
C 4
C 5
C 6
C 7
C 8
C 9
C 10
C 11
C 13
D 9
D 10
D 11
D 12
D 13
```

## Sample Output
```
S 1
H 3
H 7
C 12
D 8
```

