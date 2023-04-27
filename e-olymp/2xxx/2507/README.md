# Border [⬀](https://www.e-olymp.com/en/problems/2507)
In international politics an important concept is a boundary between the states. Unclear understanding of the parties where the border may lead to international conflicts and even wars.

In this problem the situation is somewhat simpler, since the two states have a clear understanding of what territory belongs to any of them.

The area occupied by two States, is a rectangle of size m by w kilometers, divided into squares with a side of one kilometer. Each of these squares is wholly owned by one of the states.

Find the length of the border between two states. The side of the square belongs to border, if from one side it belongs to one state, and from the other side it belongs to the second state.

## Input
The first line contains two integers: w and h (1 ≤ w, h ≤ 100) - the size of rectangle in kilometers. Next h lines describe the territory. Each of the lines contains w characters. If the symbol equals to A, the corresponding unit square belongs to the first state, and if it equals to B, it belongs to the second state. It is guaranteed that each state holds at least one square.

The territory of each state represents a connected region.

## Output
Print one number - the length of the border between the states in kilometers.

## Input example #1
```
5 6
AAABB
ABBBB
AAABB
AAAAB
AAAAB
AABBB
```

## Output example #1
```
13
```
