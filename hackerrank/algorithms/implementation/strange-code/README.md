# Strange Counter [⬀](https://www.hackerrank.com/challenges/strange-code)

There is a strange counter. At the first second, it displays the number `3`. Each 
second, the number displayed by decrements by `1` until it reaches `1`. In next 
second, the timer resets to  and continues counting down. The diagram below shows 
the counter values for each time  in the first three cycles:

```
time value    time value    time value
  1    3        4    6       10   12 
  2    2        5    5       11   11
  3    1        6    4       12   10
                7    3       13    9
                8    2       14    8
                9    1       15    7
                             ...
                             21    1
```

Find and print the value displayed by the counter at time `t`.

## Function Description

Complete the strangeCounter function in the editor below.

strangeCounter has the following parameter(s):

- `int t`: an integer

## Returns

- `int`: the value displayed at time `t`

## Input Format

A single integer, the value of `t`.

## Constraints
- `1 ≤ t ≤ 10¹²`

## Subtask
- `1 ≤ t ≤ 10⁵` for 60% of the maximum score.

## Sample Input
```
4
```

## Sample Output
```
6
```

## Explanation

Time `t = 4` marks the beginning of the second cycle. It is double the number 
displayed at the beginning of the first cycle: `2 × 3 = 6`. 
This is shown in the diagram in the problem statement.

