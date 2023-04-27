# Papa Carlo [⬀](https://www.e-olymp.com/en/problems/2549)

Papa Carlo was making Buratino all his life. He made dozens, hundreds or maybe thousands of beautiful and well-dressed boys with long noses. Papa Carlo had a bunch of wooden sticks in his barn. He kept them for future noses. Last Friday Papa Carlo received an urgent order to produce batch of Buratino with the same noses. He decided to use all his wooden sticks for the noses.

For this, Papa Carlo measured all sticks and found that their lengths are natural integers. Then, the Master began to choose arbitrary two sticks of different length and saw off the longer one by the length of the smaller one. As a result three sticks were turned out. All of these sticks were sent back to the pile. So Papa Carlo had been working until all the sticks in the pile became the same length.

Help Papa Carlo and count the number of noses!

Write a program that using the number of sticks n and their lengths li (i = 1, ..., n) will determine the resulting number of noses.

Example. Let Papa Carlo has two sticks with the lengths of 4 cm and 6 cm. After the first sawing there will be three sticks: one 2 cm stick and two 4 cm sticks. After the second sawing there will be four sticks with the lengths of 2, 2, 2 and 4 cm. Finally we will get five pieces of equal length 2 cm.

## Input

The first line contains an integer n (1 ≤ n ≤ 10000) – number of nose sticks. In the following n lines n integers are given which are the lengths of sticks, one number per line (1 ≤ li ≤10000; 1 ≤ i ≤ n).

## Output

The output file should contain single integer k – number of sticks in the pile by the end of Papa Carlo’s work.

_Time limit 1 second_

_Memory limit 64 MiB_

## Input example #1
```
3
2
7
5
```

## Output example #1
```
14
```

## Input example #2
```
2
6
4
```

## Output example #2
```
5
```
