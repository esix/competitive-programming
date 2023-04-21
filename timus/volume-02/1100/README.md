# Final Standings [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1100)

Old contest software uses bubble sort for generating final standings. But now, there are too many teams and that software works too slow. You are asked to write a program, which generates exactly the same final standings as old software, but fast.

## Input

The first line of input contains only integer `1 < N ≤ 150000` — number of teams. Each of the next `N` lines contains two integers `1 ≤ ID ≤ 10⁷` and `0 ≤ M ≤ 100`. `ID` — unique number of team, `M` — number of solved problems.

## Output

Output should contain `N` lines with two integers `ID` and `M` on each. Lines should be sorted by `M` in descending order as produced by bubble sort (see below).

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
1 2
16 3
11 2
20 3
3 5
26 4
7 1
22 4
</pre>
</td>
<td style="vertical-align: top">
<pre>
3 5
26 4
22 4
16 3
20 3
1 2
11 2
7 1
</pre>
</td>
</tr>
</table>

## Notes

Bubble sort works following way:

```
while (exists A[i] and A[i+1] such as A[i] < A[i+1]) do
   Swap(A[i], A[i+1]);
```
