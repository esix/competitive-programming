# Transformation [⬀](https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_9_D)

Write a program which performs a sequence of commands to a given string `str`. The command is one of:

- `print a b`: print from the `a`-th character to the `b`-th character of `str`
- `reverse a b`: reverse from the `a`-th character to the `b`-th character of `str`
- `replace a b p`: replace from the `a`-th character to the `b`-th character of `str` with `p`

Note that the indices of `str` start with `0`.

## Input
In the first line, a string `str` is given. `str` consists of lowercase letters. 
In the second line, the number of commands `q` is given. In the next `q` lines, each command is given in the above mentioned format.

## Output
For each print command, print a string in a line.

## Constraints
- 1 ≤ `length of str` ≤ 1000
- 1 ≤ `q` ≤ 100
- 0 ≤ `a` ≤ `b` < length of `str`
- for replace command, `b` − `a` + `1` = length of `p`

## Sample Input 1
```
abcde
3
replace 1 3 xyz
reverse 0 2
print 1 4
```

## Sample Output 1
```
xaze
```

## Sample Input 2
```
xyz
3
print 0 2
replace 0 2 abc
print 0 2
```

## Sample Output 2
```
xyz
abc
```
