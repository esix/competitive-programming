# Electrification Plan [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1982)

Some country has `n` cities. The government has decided to electrify all these cities. At first, power stations in `k` different cities were built. The other cities should be connected with the power stations via power lines. For any cities `i`, `j` it is possible to build a power line between them in `cᵢⱼ` roubles. The country is in crisis after a civil war, so the government decided to build only a few power lines. Of course from every city there must be a path along the lines to some city with a power station. Find the minimum possible cost to build all necessary power lines.

## Input

The first line contains integers `n` and `k` (`1 ≤ k ≤ n ≤ 100`). The second line contains `k` different integers that are the numbers of the cities with power stations. The next `n` lines contain an `n × n` table of integers `{cᵢⱼ}` (`0 ≤ cᵢⱼ ≤ 10⁵`). It is guaranteed that `cᵢⱼ = cⱼᵢ`, `cᵢⱼ > 0` for `i ≠ j`, `cᵢᵢ = 0`.

## Output

Output the minimum cost to electrify all the cities.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
4 2
1 4
0 2 4 3
2 0 5 2
4 5 0 1
3 2 1 0
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
3
</pre>
</td>
</tr>
</table>

