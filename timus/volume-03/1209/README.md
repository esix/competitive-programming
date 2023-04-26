# 1, 10, 100, 1000... [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1209)


Let's consider an infinite sequence of digits constructed of ascending powers of 10 written one after another. Here is the beginning of the sequence: `110100100010000…` You are to find out what digit is located at the definite position of the sequence.

## Input

There is the only integer `N` in the first line (`1 ≤ N ≤ 65535`). The `i`-th of `N` left lines contains the integer `Kᵢ` — the number of position in the sequence (`1 ≤ Kᵢ ≤ 2³¹ − 1`).

## Output

You are to output `N` digits `0` or `1` separated with a space. More precisely, the `i`-th digit of output is to be equal to the `Kᵢ`-th digit of described above sequence.

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
3
14
7
6
</pre>
</td>
<td style="vertical-align: top">
<pre>
0 0 1 0
</pre>
</td>
</tr>
</table>
