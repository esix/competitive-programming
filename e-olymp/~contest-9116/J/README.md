# [Kastenlauf](https://www.e-olymp.com/en/contests/9116/problems/79194)

Once every year, Jo and his friends want to visit the local fair in Erlangen, called Bergkirchweih. This year, they want to make a Kastenlauf (box run). They start at Jo’s home, and have one box (Kasten) of beer (with twenty bottles). As they are very thirsty, they drink one bottle of beer every 50 metres.

As the way from Jo's home to the Bergkirchweih is pretty long, they need more beer than they have initially. Fortunately, there are stores selling beer on the way. When they visit a store, they can drop their empty bottles and buy new bottles, but their total number of full bottles will not be more than twenty (because they are too lazy to carry more than one full box).

You are given the coordinates of the stores, of Jo's home and of the location of the Bergkirchweih. Write a program to determine whether Jo and his friends can happily reach the Bergkirchweih, or whether they will run out of beer on the way.

## Input

First line contains the number of test cases t (t ≤ 50). Each test case starts with one line, containing the number n (0 ≤ n ≤ 100) of stores selling beer. The next n + 2 lines contain (in this order) the location of Jo’s home, of the stores, and of the Bergkirchweih. The location is given with two integer coordinates x and y (both in meters, -32768 ≤ x, y ≤ 32767). As Erlangen is a rectangularly laid out city, the distance between two locations is the difference of the first coordinate plus the difference of the second coordinate (also called Manhattan-Metric).

## Output

For each test case print one line, containing either "happy" (if Jo and his friends can happily reach the Bergkirchweih), or "sad" (if they will run out of beer on the way).

_Time limit 1 second_

_Memory limit 64 MiB_

## Input example #1
```
2
2
0 0
1000 0
1000 1000
2000 1000
2
0 0
1000 0
2000 1000
2000 2000
```

## Output example #1
```
happy
sad
```