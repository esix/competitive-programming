# The length of the substring [⬀](https://www.e-olymp.com/en/problems/8222)
Lets start the numbering of characters in the string from 1. The substring `S[i..j]` is a sequence of characters that begins in position і and ends in position j. If і >j the substring `S[i..j]` is empty (the length of empty substring is 0). For given indexes і and j print the length of substring and all the characters of this substring not violating their order in the string.

## Input
First line contains string S, which length is no more than 100. Second line contains two indexes i and j (1 ≤ і ≤ size(S), 1 ≤ j ≤ size(S), where size(S) is the length of the string).

## Output
In the first line print the length of the substring. In the second line print all characters of substring in the same order like in the string S.

## Input example #1
```
abracadabra
2 5
```

## Output example #1
```
4
brac
```
