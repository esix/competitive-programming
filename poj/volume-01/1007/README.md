# DNA Sorting [⬀](http://poj.org/problem?id=1007)

## Description

One measure of "unsortedness" in a sequence is the number of pairs of entries that are out of order with respect to each other. 
For instance, in the letter sequence "`DAABEC`", this measure is 5, since `D` is greater than four letters to its right and `E` is 
greater than one letter to its right. This measure is called the number of inversions in the sequence. The sequence "`AACEDGG`"
has only one inversion (`E` and `D`)---it is nearly sorted---while the sequence "`ZWQM`" has 6 inversions (it is as unsorted as
can be---exactly the reverse of sorted).

You are responsible for cataloguing a sequence of DNA strings (sequences containing only the four letters `A`, `C`, `G`, and `T`). 
However, you want to catalog them, not in alphabetical order, but rather in order of "sortedness", from "most sorted" to "least sorted". 
All the strings are of the same length.


## Input

The first line contains two integers: a positive integer `n` (`0 < n <= 50`) giving the length of the strings; and a positive integer 
`m` (`0 < m <= 100`) giving the number of strings. These are followed by m lines, each containing a string of length `n`.

## Output

Output the list of input strings, arranged from "most sorted" to "least sorted". Since two strings can be equally sorted, then output 
them according to the orginal order.

## Sample Input
```
10 6
AACATGAAGG
TTTTGGCCAA
TTTGGCCAAA
GATCAGATTT
CCCGGGGGGA
ATCGATGCAT
```

## Sample Output
```
CCCGGGGGGA
AACATGAAGG
GATCAGATTT
ATCGATGCAT
TTTTGGCCAA
TTTGGCCAAA
```

## Source

East Central North America 1998
