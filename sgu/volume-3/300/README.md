# [Train](http://acm.sgu.ru/problem.php?contest=0&problem=300)

_Time limit per test: 0.5 second(s)_

_Memory limit: 65536 kilobytes_

_input: standard_

_output: standard_

The restoration of the old Berland railroad has been finished at last. From above the railroad has the form of the polyline possibly with self-intersections but without self-covering. All segments of the polyline are either parallel or perpendicular to the earth equator line, which is considered to be a straight line.

Ministers now have a very difficult task. They have to determine the length of the train traveling back and forth. The decision was made to minimize the fuel expenses. To achieve this goal the length of the train should be maximal. There and then the assumption was made that the length of the train should be equal to the length of the railroad. In this case the fuel expenses will be equal to zero. The problem is that the train cannot have any self-intersections and self-touchings at any moment of time, although the head and the tail can occupy the same point. That's why the length of the train should possibly be reduced. Your task is to find the maximum possible length of the train. You can neglect the width of the rails and consider it equals to zero.

## Input
The first line of the input contains integer number N (1≤ N≤ 4000) — the number of vertices in the polyline. The following lines contain the coordinates of the vertices — the pairs of integers xᵢ, yᵢ. Coordinates values are not greater than 10000 by absolute value. The train will pass the vertices in order they are listed in the input. All segments of polyline are parallel to the grid axis.

## Output
Write to the output the unknown maximum length of the train.

## Example(s)

### sample input 
```
5
0 0
3 0
3 1
1 1
1 -1
```

### sample output
```
6
```

### sample input
```
7
0 0
1 0
1 1
3 1
3 0
1 0
1 -1
```

### sample output
```
6
```

_Online Contester Team © 2002 - 2010. All rights reserved._
