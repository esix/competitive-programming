# Maximum [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1079)

Consider the sequence of numbers `aᵢ`, `i = 0, 1, 2, …`, which satisfies the following requirements:
- `a₀ = 0`
- `a₁ = 1`
- `a₂ᵢ = aᵢ`
- `a₂ᵢ₊₁ = aᵢ + aᵢ₊₁`

for every `i = 1, 2, 3, …` .

Write a program which for a given value of n finds the largest number among the numbers `a₀`, `a₁`, …, `aₙ`.

## Input

You are given several test cases (not more than `10`). Each test case is a line containing an integer `n` (`1 ≤ n ≤ 99 999`). The last line of input contains `0`.

## Output

For every `n` in the input write the corresponding maximum value found.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
5
10
0
</pre>
</td>
<td style="vertical-align: top">
<pre>
3
4
</pre>
</td>
</tr>
</table>
