# Dinner with Emma [⬀](https://codeforces.com/contest/616/problem/B)

Jack decides to invite Emma out for a dinner. Jack is a modest student, he doesn't want to go to an expensive restaurant. Emma is a girl with high taste, she prefers elite places.

Munhattan consists of n streets and m avenues. There is exactly one restaurant on the intersection of each street and avenue. The streets are numbered with integers from `1` to `n` and the avenues are numbered with integers from `1` to `m`. The cost of dinner in the restaurant at the intersection of the `i`-th street and the `j`-th avenue is `cᵢⱼ`.

Jack and Emma decide to choose the restaurant in the following way. Firstly Emma chooses the street to dinner and then Jack chooses the avenue. Emma and Jack makes their choice optimally: Emma wants to maximize the cost of the dinner, Jack wants to minimize it. Emma takes into account that Jack wants to minimize the cost of the dinner. Find the cost of the dinner for the couple in love.

## Input

The first line contains two integers `n`, `m` (`1 ≤ n, m ≤ 100`) — the number of streets and avenues in Munhattan.

Each of the next `n` lines contains m integers `cᵢⱼ` (`1 ≤ cᵢⱼ ≤ 10⁹`) — the cost of the dinner in the restaurant on the intersection of the i``-th street and the `j`-th avenue.

## Output

Print the only integer `a` — the cost of the dinner for Jack and Emma.

## Examples

### input
```
3 4
4 1 3 5
2 2 2 2
5 4 5 1
```

### output
```
2
```

### input
```
3 3
1 2 3
2 3 1
3 1 2
```

### output
```
1
```

## Note

In the first example if Emma chooses the first or the third streets Jack can choose an avenue with the cost of the dinner `1`. So she chooses the second street and Jack chooses any avenue. The cost of the dinner is `2`.

In the second example regardless of Emma's choice Jack can choose a restaurant with the cost of the dinner `1`.