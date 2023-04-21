# Stone Game [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1180)

Two Nikifors play a funny game. There is a heap of `N` stones in front of them. Both Nikifors in turns take some stones from the heap. One may take any number of stones with the only condition that this number is a nonnegative integer power of `2` (e.g. `1`, `2`, `4`, `8` etc.). Nikifor who takes the last stone wins. You are to write a program that determines winner assuming each Nikifor does its best.

## Input

An input contains the only positive integer number `N` (condition `N ≤ 10²⁵⁰` holds).

## Output

The first line should contain `1` in the case the first Nikifor wins and `2` in case the second one does. If the first Nikifor wins the second line should contain the minimal number of stones he should take at the first move in order to guarantee his victory.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
8
</pre>
</td>
<td style="vertical-align: top">
<pre>
1
2
</pre>
</td>
</tr>
</table>
