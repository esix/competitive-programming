# Finding a Word [⬀](https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_9_A)

Write a program which reads a word `W` and a text `T`, and prints the number of word `W` which appears in text `T`

`T` consists of string `Tᵢ` separated by space characters and newlines. Count the number of `Tᵢ` which equals to `W`. The word and text are case insensitive.

## Constraints
- The length of `W ≤ 10`
- `W` consists of lower case letters
- The length of `T` in a line ≤ 1000

## Input

In the first line, the word `W` is given. In the following lines, the text `T` is given separated by space characters and newlines.

`END_OF_TEXT` indicates the end of the text.

## Output

Print the number of `W` in the text.

## Sample Input
```
computer
Nurtures computer scientists and highly skilled computer engineers
who will create and exploit knowledge for the new era
Provides an outstanding computer environment
END_OF_TEXT
```

## Sample Output
```
3
```
