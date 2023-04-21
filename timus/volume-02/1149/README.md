# Sinus Dances [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1149)


Let `Aₙ = sin(1–sin(2+sin(3–sin(4+…sin(n))…)`

Let `Sₙ = (…(A₁+n)A₂+n–1)A₃+…+2)Aₙ+1`

For given `n` print `Sₙ`

## Input

One integer `n`. `1 ≤ n ≤ 200`

## Output

Line containing `Sₙ`


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
</pre>
</td>
<td style="vertical-align: top">
<pre>
((sin(1)+3)sin(1–sin(2))+2)sin(1–sin(2+sin(3)))+1
</pre>
</td>
</tr>
</table>
