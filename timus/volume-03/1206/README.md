# Sum of Digits of the Sum of Numbers [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1206)

Let us denote the sum of digits of the number N by S(N). In this problem, we want you to determine, how often the following equality holds:
```
S(A + B) = S(A) + S(B)
```

## Input

The input contains a single integer `K`, `2 ≤ K ≤ 50`.

## Output

You should output the number of pairs of `K`-digit numbers `A` and `B` to satisfy the above equality. Counting that number you should be aware of the following:

1. numbers `A` and `B` should not have leading zeroes;
2. while counting the total number of pairs, the order of numbers A and B matters, thus, for instance, `(12, 26)` and `(26, 12)` are different pairs that satisfy the conditions of the problem.

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
</pre>
</td>
<td style="vertical-align: top">
<pre>
1980
</pre>
</td>
</tr>
</table>
