# Sticks Problem [⬀](https://www.e-olymp.com/en/problems/1102)
Xuanxuan has n sticks of different length. One day, she puts all her sticks in a line, represented by s1, s2, s3, ..., sn. After measuring the length of each stick sk (1 ≤ k ≤ n), she finds that for some sticks si and sj (1 ≤ i < j ≤ n), each stick placed between si and sj is longer than si but shorter than sj.

Now given the length of s1, s2, s3, ..., sn, you are required to find the maximum value j – i.

## Input
Contains multiple test cases. Each case contains two lines. First line is a single integer n (n ≤ 50000), indicating the number of sticks. Second line contains n different positive integers (not larger than 100000), indicating the length of each stick in order.

## Output
Output the maximum value j – i in a single line. If there is no such i and j, just output -1.

## Input example #1
```
4
5 4 3 6
4
6 5 4 3
```

## Output example #1
```
1
-1
```
