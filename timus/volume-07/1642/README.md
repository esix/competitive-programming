# 1D Maze [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1642)

1D people lived in a 1D country. Everything in the country was one-dimensional, and everything was simple and clear: just one axis and two directions — forward and backward. Even a 1D world has problems, though; for instance, finding an exit from a maze. An idea of a 1D maze might seem weird to us, but not to 1D people. Escaping from such a maze is a hard and vital task for them. They solve this task in a following way.

A 1D person chooses a direction: backward (decreasing his coordinate) or forward (increasing it), and then moves in this direction. If he finds an exit, he escapes the maze immediately; if he encounters an obstacle, he reverses his direction and continues walking.

In order to feel the hard life of 1D residents, try to implement a function that will compute a distance a 1D person will walk before finding an exit, based on the initial direction.

## Input

The first line contains space-separated integers `n` and `x` — the number of obstacles and the coordinate of an exit point (`0 ≤ n ≤ 100`). 1D person is located at the origin. The second line contains n different integers — the coordinates of the obstacles. Each coordinate, including `x`, is non-zero and doesn't exceed `1000` in absolute value. No obstacle is located at the exit point. It is guaranteed that 1D person will encounter either obstacle or exit point sooner or later regardless of the initial direction.

## Output

Output two space-separated integers — the distance a 1D person should walk before finding an exit if his initial direction is forward or backward, respectively. If he can't find the exit due to the obstacles, output “`Impossible`”.

## Samples

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
3 -2
-10 -4 2
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
6 2
</pre>
</td>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
3 -2
10 -1 2
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
Impossible
</pre>
</td>
</tr>
</table>
