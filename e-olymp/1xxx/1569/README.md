# Divisors [⬀](https://www.e-olymp.com/en/problems/1569)
Define the function f(x) that equals to the number of divisors of x. Given two integers a and b (a ≤ b), calculate the sum f(a) + f(a + 1) + ... + f(b).

## Input
Each line contains two integers a and b (1 ≤ a ≤ b ≤ 2³¹ - 1). The input is terminated by a line with a = b = 0.

## Output
For each test case print in a separate line the value of f(a) + f(a + 1) + ... + f(b).

## Input example #1
```
9 12
1 2147483647
0 0
```

## Output example #1
```
15
46475828386
```

## Example description: 
- `9` has 3 divisors: 1, 3, 9; 
- `10` has 4 divisors: 1, 2, 5, 10; 
- `11` has 2 divisors: 1, 11; 
- `12` has 6 divisors: 1, 2, 3, 4, 6, 12; 
- **So** the answer is 3 + 4 + 2 + 6 = 15.