# Discrete Function [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1010)

There is a discrete function. It is specified for integer arguments from `1` to `N`. Each value of the function is from `−2³¹` to `2³¹−1`. You have to find such two points of the function for which all points between them are strictly below than straight line connecting them and inclination of this straight line is the largest.

## Input

There is an integer `N` in the first line (`2 ≤ N ≤ 100000`). Than `N` lines follow with the values of the function for the arguments `1`, `2`, …, `N` respectively.

## Output

Output a pair of integers, which are abscissas of the desired points. The first number must be less than the second one. If it is any ambiguity output the pair with the smallest first number.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
3
2
6
4
</pre>
</td>
<td style="vertical-align: top">
<pre>
1 2
</pre>
</td>
</tr>
</table>
