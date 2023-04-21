# Don’t Ask Woman about Her Age [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1104)

Mrs Little likes digits most of all. Every year she tries to make the best number of the year. She tries to become more and more intelligent and every year studies a new digit. And the number she makes is written in numeric system which base equals to her age. To make her life more beautiful she writes only numbers that are divisible by her age minus one. Mrs Little wants to hold her age in secret.

You are given a number consisting of digits `0`, …, `9` and Latin letters `A`, …, `Z`, where `A` equals `10`, `B` equals `11` etc. Your task is to find the minimal number `k` satisfying the following condition: the given number, written in `k`-based system is divisible by `k−1`.

## Input

Input consists of one string containing no more than 106 digits or uppercase Latin letters.

## Output

Output the only number `k`, or "`No solution.`" if for all `2 ≤ k ≤ 36` condition written above can't be satisfied. By the way, you should write your answer in decimal system.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
A1A
</pre>
</td>
<td style="vertical-align: top">
<pre>
22
</pre>
</td>
</tr>
</table>
