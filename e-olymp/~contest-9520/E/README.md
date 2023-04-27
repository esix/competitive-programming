# Simple division [⬀](https://www.e-olymp.com/en/contests/9520/problems/83417)

![prb1182](1284187239.JPG)

Integer division between a dividend n and a divisor d yields a quotient q and a remainder r. q is the integer which maximizes q·d such that q·d ≤ n and r = n - q·d.

For any set of integers there is an integer d such that each of the given integers when divided by d leaves the same remainder.

## Input

Each line contains a sequence of nonzero 32-bit signed integers separated by space. The last number on each line is 0 and this number does not belong to the sequence. There will be at least 2 and no more than 1000 numbers in a sequence; not all numbers occurring in a sequence are equal. The last line contains a single 0 and should not be processed.

## Output

For each input line, print the largest integer which when divided into each of the input integers leaves the same remainder.

*Time limit 1 second*

*Memory limit 122.17 MiB*


## Input example

```
701 1059 1417 2312 0
14 23 17 32 122 0
14 -22 17 -31 -124 0
0
```

## Output example

```
179
3
3
```
