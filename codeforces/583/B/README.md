# Robot's Task [⬀](https://codeforces.com/problemset/problem/583/B)

Robot Doc is located in the hall, with `n` computers stand in a line, numbered from left to right from `1` to `n`. Each computer contains exactly one piece of information, each of which Doc wants to get eventually. The computers are equipped with a security system, so to crack the i-th of them, the robot needs to collect at least ai any pieces of information from the other computers. Doc can hack the computer only if he is right next to it.

The robot is assembled using modern technologies and can move along the line of computers in either of the two possible directions, but the change of direction requires a large amount of resources from Doc. Tell the minimum number of changes of direction, which the robot will have to make to collect all `n` parts of information if initially it is next to computer with number `1`.

It is guaranteed that there exists at least one sequence of the robot's actions, which leads to the collection of all information. Initially Doc doesn't have any pieces of information.

## Input

The first line contains number `n` (`1 ≤ n ≤ 1000`). The second line contains `n` non-negative integers `a₁`, `a₂`, ..., `aₙ` (`0 ≤ aᵢ < n`), separated by a space. It is guaranteed that there exists a way for robot to collect all pieces of the information.

## Output

Print a single number — the minimum number of changes in direction that the robot will have to make in order to collect all `n` parts of information.

## Examples

### input
```
3
0 2 0
```

### output
```
1
```

### input
```
5
4 2 3 0 1
```

### output
```
3
```

### input
```
7
0 3 1 0 5 2 6
```

### output
```
2
```

## Note

In the first sample you can assemble all the pieces of information in the optimal manner by assembling first the piece of information in the first computer, then in the third one, then change direction and move to the second one, and then, having 2 pieces of information, collect the last piece.

In the second sample to collect all the pieces of information in the optimal manner, Doc can go to the fourth computer and get the piece of information, then go to the fifth computer with one piece and get another one, then go to the second computer in the same manner, then to the third one and finally, to the first one. Changes of direction will take place before moving from the fifth to the second computer, then from the second to the third computer, then from the third to the first computer.

In the third sample the optimal order of collecting parts from computers can look like that: `1->3->4->6->2->5->7`.

