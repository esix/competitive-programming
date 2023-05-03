# Simple Expression [⬀](https://acm.timus.ru/problem.aspx?space=1&num=2066)

You probably know that Alex is a very serious mathematician and he likes to solve serious problems. This is another problem from Alex.

You are given three nonnegative integers `a`, `b`, `c`. You have to arrange them in some order and put `+`, `−` or `×` signs between them to minimize the outcome of the resulting expression. You are not allowed to use unary minus and parentheses in the expression. There must be exactly one sign between every pair of neighbouring numbers. You should use standard order for performing operations (multiplication first, addition and subtraction then).

## Input

There are three lines with one integer in each line. The numbers are arranged in non-decreasing order (`0 ≤ a ≤ b ≤ c ≤ 100`).

## Output

Print one number — the minimal outcome.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
1
2
3
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
-5
</pre>
</td>
</tr>
</table>
