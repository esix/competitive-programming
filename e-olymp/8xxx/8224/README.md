# Suffixes of a substring [⬀](https://www.e-olymp.com/en/problems/8224)
The suffix of a string S is any substring of the form S[k.. size(S)] (1 ≤ k ≤ size(S), size(S) is the length of the string). Suffix can be either empty or match the string itself. If suffix is not empty and does not match with the string S, it is called the proper suffix of string S. Print the number of suffixes and all proper suffixes of substring S[i..j] in the increasing order of their lengths.

## Input
First line contains S, its length is no more than 100. Second line contains two indexes i and j (1 ≤ i ≤ size(S), 1 ≤ j ≤ size(S)).

## Output
Print in the first line the number of suffixes of substring S[i..j]. In the next lines print all proper suffixes of a given substring. The output format is given in a sample.

## Input example #1
```
abracadabra
2 5
```

## Output example #1
```
5
rac
ac
c
```
