# n-th Largest Value [⬀](https://www.e-olymp.com/en/problems/2440)

You must write a program that prints the n-th largest value in a fixed sized array of integers. To make things simple, n will be 3 and the array will always be have 10 decimal integer values.

## Input

The first line contains a single integer p (1 ≤ p ≤ 1000), which is the number of data sets that follow. Each data set consists of a single line containing the data set number, followed by a space, followed by 10 space separated decimal integers whose values are between 1 and 1000 inclusive.

## Output

For each data set generate one line with the following values: The data set number as a decimal integer, a space, and the 3-rd largest value of the corresponding 10 integers.

_Time limit 1 second_

_Memory limit 64 MiB_

## Input example #1
```
4
1 1 2 3 4 5 6 7 8 9 1000
2 338 304 619 95 343 496 489 116 98 127
3 931 240 986 894 826 640 965 833 136 138
4 940 955 364 188 133 254 501 122 768 408
```

## Output example #1
```
1 8
2 489
3 931
4 768
```
