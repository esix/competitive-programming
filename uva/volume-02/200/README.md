# [200 - Rare Order](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=4&page=show_problem&problem=136)

A rare book collector recently discovered a book written in an unfamiliar language that used the same
characters as the English language. The book contained a short index, but the ordering of the items
in the index was different from what one would expect if the characters were ordered the same way as
in the English alphabet. The collector tried to use the index to determine the ordering of characters
(i.e., the collating sequence) of the strange alphabet, then gave up with frustration at the tedium of
the task.

You are to write a program to complete the collector’s work. In particular, your program will take
a set of strings that has been sorted according to a particular collating sequence and determine what
that sequence is.

## Input

The input consists of an ordered list of strings of uppercase letters, one string per line. Each string
contains at most 20 characters. The end of the list is signalled by a line with the single character ‘#’.

Not all letters are necessarily used, but the list will imply a complete ordering among those letters that
are used.

## Output
Your output should be a single line containing uppercase letters in the order that specifies the collating
sequence used to produce the input data file.

### Sample Input
```
XWY
ZX
ZXY
ZXW
YWWX
#
```

### Sample Output
```
XZYW
```
