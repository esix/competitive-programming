# [Factorials!!!](https://acm.timus.ru/problem.aspx?space=1&num=1083)

### Definition 1.
- `n!!…! = n(n−k)(n−2k)…(n mod k)`, if `k` doesn’t divide `n`
- `n!!…! = n(n−k)(n−2k)…k`, if `k` divides `n` (There are `k` marks `!` in the both cases).

### Definition 2.
`X mod Y` — a remainder after division of `X` by `Y`.

For example, 
- `10 mod 3 = 1`
- `3! = 3·2·1`
- `10!!! = 10·7·4·1`.

Given numbers `n` and `k` we have calculated a value of the expression in the first definition. Can you do it as well?

## Input

contains the only line: one integer `n`, `1 ≤ n ≤ 10`, then exactly one space, then `k` exclamation marks, `1 ≤ k ≤ 20`.

## Output

contains one number — `n!!…!` (there are `k` marks `!` here).

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
9 !!
</pre>
</td>
<td style="vertical-align: top">
<pre>
945
</pre>
</td>
</tr>
</table>
