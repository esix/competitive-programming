# Quick Sort [⬀](https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_6_C)

Let's arrange a deck of cards. Your task is to sort totally `n` cards. A card 
consists of a part of a suit (`S`, `H`, `C` or `D`) and an number. Write a 
program which sorts such cards based on the following pseudocode:
```
Partition(A, p, r)
1 x = A[r]
2 i = p-1
3 for j = p to r-1
4     do if A[j] <= x
5        then i = i+1
6            exchange A[i] and A[j] 
7 exchange A[i+1] and A[r]
8 return i+1


Quicksort(A, p, r)
1 if p < r
2    then q = Partition(A, p, r)
3        run Quicksort(A, p, q-1)
4        run Quicksort(A, q+1, r)
```

Here, `A` is an array which represents a deck of cards and comparison operations 
are performed based on the numbers.

Your program should also report the stability of the output for the given input 
(instance). Here, 'stability of the output' means that: cards with the same value 
appear in the output in the same order as they do in the input (instance).

## Input
The first line contains an integer `n`, the number of cards.

`n` cards are given in the following lines. Each card is given in a line and represented by a pair of a character and an integer separated by a single space.

## Output
In the first line, print the stability ("`Stable`" or "`Not stable`") of this output.

In the following lines, print the arranged cards in the same manner of that of the input.

## Constraints
- 1 ≤ `n` ≤ 100,000
- 1 ≤ the number of a card ≤ 10⁹
- There are no identical card in the input

## Sample Input 1
```
6
D 3
H 2
D 1
S 3
D 2
C 1
```

## Sample Output 1
```
Not stable
D 1
C 1
D 2
H 2
D 3
S 3
```

## Sample Input 2
```
2
S 1
H 1
```

## Sample Output 2
```
Stable
S 1
H 1
```

