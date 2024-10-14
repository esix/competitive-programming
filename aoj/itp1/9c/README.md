# Card Game [⬀](https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_9_C)

Taro and Hanako are playing card games. They have n cards each, and they compete n turns. At each turn Taro and Hanako respectively puts out a card. The name of the animal consisting of alphabetical letters is written on each card, and the bigger one in lexicographical order becomes the winner of that turn. The winner obtains 3 points. In the case of a draw, they obtain 1 point each.

Write a program which reads a sequence of cards Taro and Hanako have and reports the final scores of the game.

## Input

In the first line, the number of cards n is given. In the following n lines, the cards for n turns are given respectively. For each line, the first string represents the Taro's card and the second one represents Hanako's card.

## Constraints

- `n ≤ 1000`
- The length of the string `≤ 100`

## Output

Print the final scores of Taro and Hanako respectively. Put a single space character between them.

## Sample Input
```
3
cat dog
fish fish
lion tiger
```

## Sample Output
```
1 7
```
