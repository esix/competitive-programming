# Chinese Dialects [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1964)

Vova moved from Guangzhou to Shenzhen. He immediately found out that the local people don't understand his Cantonese phrases as well. Vova tried chatting with them in Mandarin, but to no success.
Then Vova decided to learn more about Chinese dialects. It turned out that people in China speak `k` different dialects, at that at least `a₁` people speak the first dialect, at least `a₂` people speak the second dialect, …, at least `aₖ` people speak the `k`-th dialect. How many people speak all `k` dialects if the population of China is n people?

## Input

The first line contains integers `n` and `k` (`2 ≤ k ≤ 20`; `1 ≤ n ≤ 10⁹`). The second line contains space-separated integers `a₁`, …, `aₖ` (`1 ≤ aₖ ≤ n`).

## Output

Print the minimum number of people in China that speak all `k` dialects of the Chinese language.

## Samples

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
1000000000 2
800000000 800000000
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
600000000
</pre>
</td>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
1000000000 2
500000000 500000000
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
0
</pre>
</td>
</tr>
</table>

