# Palindrome. Again Palindrome [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1354)


A *word* is the nonempty sequence of symbols `a₁a₂…aₙ`. A *palindrome* is the word `a₁a₂…aₙ` that is read from the left to the right and from the right to the left the same way (`a₁a₂…aₙ = aₙaₙ₋₁…a₁`). If `S₁ = a₁a₂…aₙ` and `S₂ = b₁b₂…bₘ`, then `S₁S₂ = a₁a₂…aₙb₁b₂…bₘ`. The input contains some word `S₁`. You are to find a nonempty word `S₂` of the minimal length that `S₁S₂` is a palindrome.

## Input

The first input line contains `S₁` (it may consist only of the Latin letters). It’s guaranteed that the length of `S₁` doesn’t exceed 10000 symbols.

## Output

`S₁S₂`.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
No
</pre>
</td>
<td style="vertical-align: top">
<pre>
NoN
</pre>
</td>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
OnLine
</pre>
</td>
<td style="vertical-align: top">
<pre>
OnLineniLnO
</pre>
</td>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
AbabaAab
</pre>
</td>
<td style="vertical-align: top">
<pre>
AbabaAababA
</pre>
</td>
</tr>
</table>
