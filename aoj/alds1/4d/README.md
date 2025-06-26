# Allocation [⬀](https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_4_D)

You are given `n` packages of `wᵢ` kg from a belt conveyor in order (`i=0,1,...n−1`). 
You should load all packages onto `k` trucks which have the common maximum load `P`. 
Each truck can load consecutive packages (more than or equals to zero) from the 
belt conveyor unless the total weights of the packages in the sequence does not 
exceed the maximum load `P`.

Write a program which reads `n`, `k` and `wᵢ`, and reports the minimum value of 
the maximum load `P` to load all packages from the belt conveyor.

## Input
In the first line, two integers `n` and `k` are given separated by a space character. 
In the following `n` lines, `wᵢ` are given respectively.

## Output
Print the minimum value of `P` in a line.

## Constraints

- 1 ≤ `n` ≤ 100,000
- 1 ≤ `k` ≤ 100,000
- 1 ≤ `wᵢ` ≤ 10,000

## Sample Input 1
```
5 3
8
1
7
3
9
```

## Sample Output 1
```
10
```

If the first truck loads two packages of `{8,1}`, the second truck loads two packages 
of `{7,3}` and the third truck loads a package of `{9}`, then the minimum value of the 
maximum load `P` shall be `10`.

## Sample Input 2
```
4 2
1
2
2
6
```

## Sample Output 2
```
6
```

If the first truck loads three packages of `{1,2,2}` and the second truck loads a 
package of `{6}`, then the minimum value of the maximum load `P` shall be 6.
