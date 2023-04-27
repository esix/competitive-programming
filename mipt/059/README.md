# CD [⬀](http://acm.mipt.ru/judge/problems.pl?problem=059)

_Time limit = 5 second(s)_

_Memory limit = 33000 Kb_

You have a long drive by car ahead. You have a tape recorder, but unfortunately your best music is on CDs. You need to have it on tapes so the problem to solve is: you have a tape N minutes long. How to choose tracks from CD to get most out of tape space and have as short unused space as possible.

Assumptions:

- number of tracks on the CD does not exceed 20
- no track is longer than N minutes
- tracks do not repeat
- length of each track is expressed as an integer number not more then 1024
- N is also integer

## Input 

Value N, number of tracks and durations of the tracks.

For example, in the first sample input we have: N=5, number of tracks=3, first track lasts for 1 minute, second one 3 minutes, next one 4 minutes.

## Output

 Maximum sum of duration times.

##Input#1
```
5 3 
1 3 4
```

##Output#1
```
5
```

##Input#2
```
10 4
9 8 4 2
```

##Output#2
```
10
```

##Input#3
```
20 4 
10 5 7 4
```

##Output#3
```
19
```

## Input#4
```
90 8
10 23 1 2 3 4 5 7
```

## Output#4
```
55
```

Input#5
```
45 8
4 10 44 43 12 9 8 2
```

Output#5
```
45
```
