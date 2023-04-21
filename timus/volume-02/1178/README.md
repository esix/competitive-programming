# Akbardin’s Roads [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1178)


Great Akbardin decided to build new roads in his caliphate. He wants to build minimal number of roads so that one can travel from any town to any other using only these roads. But this problem is too difficult for him and his mathematicians. So, at first, they decided to build straight roads between towns in such a way, that every town becomes connected with only one other. Because crossroads make movement dangerous, no two roads should intersect.

You task is to make plan of the roads being given coordinates of towns.

## Input

First line contains an even integer `N` (`N ≤ 10000`) — the number of towns. Each of the next `N` lines contains pair of integers — coordinates of `i`-th town `xᵢ`, `yᵢ` (`−10⁹ < xᵢ, yᵢ < 10⁹`). No three towns lay on one line.

## Output

Output `N/2` lines with description of one road on each. Road is identified by pair of towns it connects. If there are several correct answers, output any of them.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
4
0 2
1 1
3 4
4 4
</pre>
</td>
<td style="vertical-align: top">
<pre>
1 3
2 4
</pre>
</td>
</tr>
</table>
