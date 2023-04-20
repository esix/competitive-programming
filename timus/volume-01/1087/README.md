# The Time to Take Stones [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1087)


You probably know the game where two players in turns take 1 to 3 stones from a pile. Looses the one who takes the last stone. We'll generalize this well known game. Assume that both of the players can take not 1, 2 or 3 stones, but `k₁`, `k₂`, …, `kₘ` ones. Again we'll be interested in one question: who wins in the perfect game. It is guaranteed that it is possible to make next move irrespective to already made moves.

## Input

The first line contains two integers: `n` and `m` (`1 ≤ n ≤ 10000`; `1 ≤ m ≤ 50`) — they are an initial amount of stones in the pile and an amount of numbers `k₁`, …, `kₘ`. The second line consists of the numbers `k₁`, …, `kₘ`, separated with a space (`1 ≤ kᵢ ≤ n`).

## Output

Output `1`, if the first player (the first to take stones) wins in a perfect game. Otherwise, output `2`.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
17 3
1 3 4
</pre>
</td>
<td style="vertical-align: top">
<pre>
2
</pre>
</td>
</tr>
</table>
