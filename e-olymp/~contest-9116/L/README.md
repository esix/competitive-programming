# [Minibus](https://www.e-olymp.com/en/contests/9116/problems/79196)

Minibus in Mendeleevo city moves according to the route from the bus stop number 1 to the bus stop number m. The driver stops at the station only if at least one of the passengers in the cabin wants to get out. At the same time all the passengers waiting for a minibus at this stop, sit in it (number of seats is unlimited). As the bus starts moving from the stop number 1, all passengers at it just sit down in a minibus.

Given the list of passengers, determine the list of stations where the bus stops. It is guaranteed that at least one passenger of minibus waits at the bus stop number 1.

## Input

First line contains two positive integers n, m (1 ≤ n ≤ 10⁵, 1 ≤ m ≤ 10⁹) - the number of passengers and bus stops. Each of the next n lines contains two positive integers `lᵢ` - the number of bus stop where the i-th passenger waits for minibus, `rᵢ` - the number of bus stop where the i-th passenger goes out (1 ≤ `lᵢ` < `rᵢ` ≤ m).

## Output

Print in the first line the number of bus stops k where the minibus will stop. Then print k lines - the numbers of these bus stops in increasing order.

_Time limit 1 second_

_Memory limit 122.17 MiB_

## Input example #1
```
6 11
1 4
2 3
4 5
2 5
4 7
4 10
```

## Output example #1
```
5
1
4
5
7
10
```