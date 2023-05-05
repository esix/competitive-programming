# Asphalting Roads [⬀](https://codeforces.com/problemset/problem/583/A)

City X consists of `n` vertical and n horizontal infinite roads, forming `n × n` intersections. Roads (both vertical and horizontal) are numbered from `1` to `n`, and the intersections are indicated by the numbers of the roads that form them.

Sand roads have long been recognized out of date, so the decision was made to asphalt them. To do this, a team of workers was hired and a schedule of work was made, according to which the intersections should be asphalted.

Road repairs are planned for `n²` days. On the `i`-th day of the team arrives at the `i`-th intersection in the list and if **none** of the two roads that form the intersection were already asphalted they asphalt both roads. Otherwise, the team leaves the intersection, without doing anything with the roads.

According to the schedule of road works tell in which days at least one road will be asphalted.

## Input

The first line contains integer `n` (`1 ≤ n ≤ 50`) — the number of vertical and horizontal roads in the city.

Next `n²` lines contain the order of intersections in the schedule. The `i`-th of them contains two numbers `hᵢ`, `vᵢ` (`1 ≤ hᵢ, vᵢ ≤ n`), separated by a space, and meaning that the intersection that goes `i`-th in the timetable is at the intersection of the `hᵢ`-th horizontal and `vᵢ`-th vertical roads. It is guaranteed that all the intersections in the timetable are distinct.

## Output

In the single line print the numbers of the days when road works will be in progress in ascending order. The days are numbered starting from `1`.

## Examples

### input
```
2
1 1
1 2
2 1
2 2
```

### output
```
1 4
```

### input
```
1
1 1
```

### output
```
1 
```

## Note

In the sample the brigade acts like that:

1. On the first day the brigade comes to the intersection of the `1`-st horizontal and the `1`-st vertical road. As none of them has been asphalted, the workers asphalt the `1`-st vertical and the `1`-st horizontal road;
2. On the second day the brigade of the workers comes to the intersection of the `1`-st horizontal and the `2`-nd vertical road. The `2`-nd vertical road hasn't been asphalted, but as the `1`-st horizontal road has been asphalted on the first day, the workers leave and do not asphalt anything;
3. On the third day the brigade of the workers come to the intersection of the `2`-nd horizontal and the `1`-st vertical road. The `2`-nd horizontal road hasn't been asphalted but as the `1`-st vertical road has been asphalted on the first day, the workers leave and do not asphalt anything;
4. On the fourth day the brigade come to the intersection formed by the intersection of the `2`-nd horizontal and `2`-nd vertical road. As none of them has been asphalted, the workers asphalt the `2`-nd vertical and the `2`-nd horizontal road.