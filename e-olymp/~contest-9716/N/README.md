# B-Casting [⬀](https://www.e-olymp.com/en/problems/5124)
Casting around for problems leads us to combine modular arithmetic with different integer bases, particularly the problem of computing values modulo b - 1, where b is the base in which the value is represented. For example,

7829₁₀ mod 9 = 8

37777777777777773₈ mod 7 = 6

123456₇ mod 6 = 3

(Note that 37777777777777773₈ = 1125899906842619₁₀ and 123456₇ = 22875₁₀)

Your job is to write a program that reads integer values in various bases and computes the remainder after dividing these values by one less than the input base.

## Input
The first line contains the number of data sets t (1 ≤ t ≤ 1000). Each data set should be processed identically and independently.

Each data set consists of a single line of input containing three space-separated values. The first is an integer which is the data set number. The second is an integer which is the number b (2 ≤ b ≤ 10), denoting a numeric base. The third is an unsigned number d, in base b representation. For this problem, the number of numeric characters in d will be limited to 10000000.

## Output
For each data set there is a single line of output. It contains the data set number followed by a single space which is then followed by the remainder resulting from dividing d by (b - l).

## Input example #1
```
5
1 10 7829
2 7 123456
3 6 432504023545112
4 8 37777777777777773
5 2 10110100010101010101101110001010001010101010101010111
```

## Output example #1
```
1 8
2 3
3 1
4 6
5 0
```
