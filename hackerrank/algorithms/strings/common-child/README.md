# Common Child [⬀](https://www.hackerrank.com/challenges/common-child)

A string is said to be a child of a another string if it can be formed by deleting 0 or more characters from the other string. Letters cannot be rearranged. Given two strings of equal length, what's the longest string that can be constructed such that it is a child of both?

## Example
```
s1 = 'ABCD'
s2 = 'ABDC'
```

These strings have two children with maximum length 3, `ABC` and `ABD`. They can be formed by eliminating either the `D` or `C` from both strings. Return 3.

## Function Description

Complete the `commonChild` function in the editor below.

`commonChild` has the following parameter(s):
- `string s1`: a string
- `string s2`: another string

## Returns

- `int`: the length of the longest string which is a common child of the input strings

## Input Format

There are two lines, each with a string, `s1` and `s2`.

## Constraints
- `1 ≤ |s1|, |s2| ≤ 5000` where `|s|` means "the length of `s`"
- All characters are upper case in the range ascii[A-Z].


## Sample Input
```
HARRY
SALLY
```

## Sample Output
```
 2
```

## Explanation

The longest string that can be formed by deleting zero or more characters from `HARRY` and `SALLY` is , whose length is 2.

## Sample Input 1
```
AA
BB
```

## Sample Output 1
```
0
```

## Explanation 1
`AA` and `BB` have no characters in common and hence the output is 0.

## Sample Input 2
```
SHINCHAN
NOHARAAA
```

## Sample Output 2
```
3
```

## Explanation 2

The longest string that can be formed between `SHINCHAN` and `NOHARAAA` while maintaining the order is `NHA`.

## Sample Input 3
```
ABCDEF
FBDAMN
```

## Sample Output 3
```
2
```

## Explanation 3
`BD` is the longest child of the given strings.
