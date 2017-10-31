# [Kukurer Voy](http://lightoj.com/practice_contest_showproblem.php?contest_id=727&problem=B)

Maksudur Rahman Maateen lives in a city consists of n intersections connected by n-1 roads, in a way that can go from any intersection to any other intersection moving along some of these roads.

Every day he starts walking in the city following a simple strategy; if he's at some intersection he has to pick one of the roads connected to it at random such that he hasn't walked through it before and walk through it and and if there isn't any, he stops and goes home.

His only problem is that he's afraid of dogs. He doesn't even like seeing dogs. So he's wondering in the worst scenario, how many dogs he'll have to see during his walk until he stops if he starts walking at some intersection. Can you help him?

## Input

The input starts with an integer T (1 <= T <= 10), the number of test cases. following T blocks describing each test case.

Each block starts with a line containing an integer n (2 <= n <= 105), the number of intersections in the city. Intersections are numbers 1 through n.

Followed by n-1 lines each containing integers u, v, (1 <= u, v <= n) and d (1 <= d <= 109), the numbers of intersections at the end of this road and the number od dogs Eagle will see walking in this road.

## Output

For each test case print a line containing n integers, the ith integer represents the maximum number of dogs Eagle might see if he starts his walk at intersection i.

## Example

### Input:
```
1
4
1 2 3
3 2 4
3 4 5
```

### Output:
```
12 9 7 12
```
