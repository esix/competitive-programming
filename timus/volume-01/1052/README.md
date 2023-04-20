# Rabbit Hunt [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1052)

A good hunter kills two rabbits with one shot. Of course, it can be easily done since for any two points we can always draw a line containing the both. But killing three or more rabbits in one shot is much more difficult task. To be the best hunter in the world one should be able to kill the maximal possible number of rabbits. Assume that rabbit is a point on the plane with integer `x` and `y` coordinates. Having a set of rabbits you are to find the largest number of rabbits that can be killed with single shot, i.e. maximum number of points lying exactly on the same line. No two rabbits sit at one point.

## Input

An input contains an integer `N` (`3 ≤ N ≤ 200`) specifying the number of rabbits. Each of the next `N` lines in the input contains the `x` coordinate and the `y` coordinate (in this order) separated by a space (`−2000 ≤ x, y ≤ 2000`).

## Output

The output contains the maximal number of rabbits situated in one line.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
6
7 122
8 139
9 156
10 173
11 190
-100 1
</pre>
</td>
<td style="vertical-align: top">
<pre>
5
</pre>
</td>
</tr>
</table>
