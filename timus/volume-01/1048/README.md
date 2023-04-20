# Superlong Sums [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1048)


The creators of a new programming language D++ have found out that whatever limit for SuperLongInt type they make, sometimes programmers need to operate even larger numbers. A limit of `1000` digits is so small… You have to find the sum of two numbers with maximal size of `1 000 000` digits.

## Input

The first line contains a single integer `N` that is the length of the given integers (`1 ≤ N ≤ 1 000 000`). It is followed by these integers written in columns. That is, the next `N` lines contain two digits each, divided by a space. Each of the two given integers is not less than `1`, and the length of their sum does not exceed `N`. The integers may contain leading zeroes.

## Output

Output exactly `N` digits in a single line representing the sum of these two integers.

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
0 4
4 2
6 8
3 7
</pre>
</td>
<td style="vertical-align: top">
<pre>
4750
</pre>
</td>
</tr>
</table>
