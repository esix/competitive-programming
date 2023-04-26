# Elections [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1263)

The next in turn elections are to come soon. All the fences are postered with leaflets and the mail boxes are full of throwaways. Cheeky guys are looking at us from TV’s and promise to make our life better… And programmer Vasechkin is knee-deep in work. He is to write a program that would calculate the results of voting.

## Input

The first line contains a number of candidates `N` (`1 ≤ N ≤ 10000`) and a number of electors `M` (`1 ≤ M ≤ 10000`). Then `M` lines follow, each one contains a number of candidate that the elector voted for. The candidates are numbered with integers from `1` to `N`.

## Output

Output `N` lines. The `i`-th line should contain the percent of electors that voted for the `i`-th candidate (to within 2 decimals).

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
3 6
1
2
3
2
1
1
</pre>
</td>
<td style="vertical-align: top">
<pre>
50.00%
33.33%
16.67%
</pre>
</td>
</tr>
</table>
