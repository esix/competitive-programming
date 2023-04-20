# K-based Numbers. Version 2 [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1012)

Let’s consider `K`-based numbers, containing exactly `N` digits. We define a number to be valid if its `K`-based notation doesn’t contain two successive zeros. For example:

- `1010230` is a valid 7-digit number;
- `1000198` is not a valid number;
- `0001235` is not a 7-digit number, it is a 4-digit number.

Given two numbers `N` and `K`, you are to calculate an amount of valid `K` based numbers, containing `N` digits.
You may assume that `2 ≤ K ≤ 10`; `N ≥ 2`; `N + K ≤ 1800`.

## Input
The numbers `N` and `K` in decimal notation separated by the line break.

## Output

The result in decimal notation.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
2
10
</pre>
</td>
<td style="vertical-align: top">
<pre>
90
</pre>
</td>
</tr>
</table>
