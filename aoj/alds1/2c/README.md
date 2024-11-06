# Stable Sort [⬀](https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_2_C)

Let's arrange a deck of cards. There are totally 36 cards of 4 suits(`S`, `H`, `C`, `D`) and 9 values (`1`, `2`, ... `9`). For example, 'eight of heart' is represented by `H8` and 'one of diamonds' is represented by `D1`.

Your task is to write a program which sorts a given set of cards in ascending order by their values using the Bubble Sort algorithms and the Selection Sort algorithm respectively. These algorithms should be based on the following pseudocode:

```
BubbleSort(C)
1 for i = 0 to C.length-1
2     for j = C.length-1 downto i+1
3         if C[j].value < C[j-1].value
4             swap C[j] and C[j-1]
```

```
SelectionSort(C)
1 for i = 0 to C.length-1
2     mini = i
3     for j = i to C.length-1
4         if C[j].value < C[mini].value
5             mini = j
6     swap C[i] and C[mini]
```

Note that, indices for array elements are based on 0-origin.

For each algorithm, report the stability of the output for the given input (instance). Here, 'stability of the output' means that: cards with the same value appear in the output in the same order as they do in the input (instance).

## Input

The first line contains an integer `N`, the number of cards.

`N` cards are given in the following line. Each card is represented by two characters. Two consecutive cards are separated by a space character.

## Output

In the first line, print the arranged cards provided by the Bubble Sort algorithm. Two consecutive cards should be separated by a space character.

In the second line, print the stability ("`Stable`" or "`Not stable`") of this output.

In the third line, print the arranged cards provided by the Selection Sort algorithm. Two consecutive cards should be separated by a space character.

In the fourth line, print the stability ("`Stable`" or "`Not stable`") of this output.

## Constraints
- 1 ≤ `N` ≤ 36

## Sample Input 1
```
5
H4 C9 S4 D2 C3
```

## Sample Output 1
```
D2 C3 H4 S4 C9
Stable
D2 C3 S4 H4 C9
Not stable
```

## Sample Input 2
```
2
S1 H1
```

## Sample Output 2
```
S1 H1
Stable
S1 H1
Stable
```
