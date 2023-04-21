# Lonesome Knight [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1197)

The statement of this problem is very simple: you are to determine how many squares of the chessboard can be attacked by a knight standing alone on the board. Recall that a knight moves two squares forward (horizontally or vertically in any direction) and then one square sideways (perpedicularly to the first direction).

## Input

The first line contains the number `N` of test cases, `1 ≤ N ≤ 64`. Each of the following N lines contains a test: two characters. The first character is a lowercase English letter from '`a`' to '`h`' and the second character is an integer from `1` to `8`; they specify the rank and file of the square at which the knight is standing.

## Output

Output `N` lines. Each line should contain the number of the squares of the chessboard that are under attack by the knight.

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
a1
d4
g6
</pre>
</td>
<td style="vertical-align: top">
<pre>
2
8
6
</pre>
</td>
</tr>
</table>
