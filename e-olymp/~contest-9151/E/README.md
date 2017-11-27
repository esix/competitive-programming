# [Insert Parentheses](https://www.e-olymp.com/en/contests/9151/problems/79569)

Milhouse need to solve a school task by tomorrow and needs your help. Here is the task:

Given a string of parentheses, you must turn it into a well formed string by inserting as few parentheses as possible, at any position (you cannot delete or change any of the existing parentheses). A well-formed string of parentheses is defined by the following rules:

- The empty string is well formed.
- If `s` is a well formed string, `(s)` is a well formed string.
- If `s` and `t` are well formed strings, their concatenation `st` is a well formed string.

As examples, "`(()())`", "" and "`(())()`" are well formed strings and "())(", "()(" and ")" are malformed strings.

## Input

Given a string of parentheses, it contains between 1 and 50 characters, inclusive.

## Output

Print the minimum number of parentheses that need to be inserted to make the input string into a well formed string.

_Time limit 1 second_

_Memory limit 122.17 MiB_

## Input example #1
```
(()(()
```

## Output example #1
```
2
```
