# Tram [⬀](https://www.e-olymp.com/en/contests/9208/problems/80037)

Tram network in Zagreb consists of a number of intersections and rails connecting some of them. In every intersection there is a switch pointing to the one of the rails going out of the intersection. When the tram enters the intersection it can leave only in the direction the switch is pointing. If the driver wants to go some other way, he/she has to manually change the switch.

When a driver has do drive from intersection `a` to the intersection `b` he/she tries to choose the route that will minimize the number of times he/she will have to change the switches manually.

Write a program that will calculate the minimal number of switch changes necessary to travel from intersection `a` to intersection `b`.

## Input

The first line contains integers `n`, `a` and `b` (`2 ≤ n ≤ 100000, 1 ≤ a, b ≤ n`), separated by a single blank character, `n` is the number of intersections in the network, and intersections are numbered from `1` to `n`.

Each of the following n lines contain a sequence of integers separated by a single blank character. First number in the `i`-th line, `kᵢ` (`0 ≤ kᵢ ≤ n - 1`), represents the number of rails going out of the `i`-th intersection. Next `kᵢ` numbers represents the intersections directly connected to the `i`-th intersection. Switch in the `i`-th intersection is initially pointing in the direction of the first intersection listed.

## Output

The only line should contain the target minimal number. If there is no route from `a` to `b` the line should contain the integer "`-1`".

_Time limit 1 seconds_

_Memory limit 122.17 MiB_

## Input example #1
```
3 2 1
2 2 3
2 3 1
2 1 2
```

## Output example #1
```
0
```
