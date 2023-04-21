# Nontrivial Numbers [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1118)

Specialists of SKB Kontur have developed a unique cryptographic algorithm for needs of information protection while transmitting data over the Internet. The main advantage of the algorithm is that you needn't use big numbers as keys; you may easily do with natural numbers not exceeding a million. However, in order to strengthen endurance of the cryptographic system it is recommended to use special numbers - those that psychologically seem least "natural". We introduce a notion of triviality in order to define and emphasize those numbers.

Triviality of a natural number `N` is the ratio of the sum of all its proper divisors to the number itself. Thus, for example, triviality of the natural number `10` is equal to `0.8 = (1 + 2 + 5) / 10` and triviality of the number `20` is equal to `1.1 = (1 + 2 + 4 + 5 + 10) / 20`. Recall that *a proper divisor* of a natural number is the divisor that is strictly less than the number.

Thus, it is recommended to use as nontrivial numbers as possible in the cryptographic protection system of SKB Kontur. You are to write a program that will find the less trivial number in a given range.

## Input

The only line contains two integers `I` and `J`, `1 ≤ I ≤ J ≤ 10⁶`, separated with a space.

## Output

Output the only integer N satisfying the following conditions:
- `I ≤ N ≤ J`;
- `N` is the least trivial number among the ones that obey the first condition.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
24 28
</pre>
</td>
<td style="vertical-align: top">
<pre>
25
</pre>
</td>
</tr>
</table>
