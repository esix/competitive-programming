# Farm [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1349)

Here is a farm. Here is a farmer that counts how many animal live in his farm: `a` camels, `b` sheep, `c` green cockroaches. Occurs that `aⁿ + bⁿ = cⁿ`. `n` is given. You are to find all the rest.

## Input

`n` (`0 ≤ n ≤ 100`)

## Output

Three different integers (`a`, `b` and `c`) such that `aⁿ + bⁿ = cⁿ`, `1 ≤ a, b, c ≤ 100`. If there are several solutions you should output the one where `a` is minimal. If there are several solutions with the minimal `a` you should output the one with minimal `b`, and so on. Output `−1` if there is no solution.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
0
</pre>
</td>
<td style="vertical-align: top">
<pre>
-1
</pre>
</td>
</tr>
<td style="vertical-align: top">
<pre>
1
</pre>
</td>
<td style="vertical-align: top">
<pre>
1 2 3
</pre>
</td>
</tr>
</table>
