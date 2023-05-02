# Four Imps [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1924)

The world is in danger. One famous swindler passed away recently (by the way, nobody knows his real name, so let's call him Ostap). Having got to the hell he decided to make a deal with the Devil. More precisely, it was, actually, not a deal but a stake in a totalizator. The rules of the game are quite simple. Several imps divide into two teams — “`black`” and “`grimy`”. Then they go to the game field. Numbers from `1` to `n` are written on the field, and the teams do their turns one after another by putting down with black ink signs of `+` and `−` between the numbers. When there is no two adjacent numbers without sign between them left, players calculate the result of obtained expression on the field. The goal of the “`black`” team is to make this result even, the goal of the “`grimy`” team is to make it odd. All four imps are experts in this game, therefore they always do optimal turns. “`Black`” team plays first.

The totalizator rules are the following: if Ostap guesses which team wins, he will get his life back. Otherwise, the Devil will get the power over the whole world. The stakes are high, so you have to help Ostap with determining the winner.

## Input

The input is a single integer `n` (`1 ≤ n ≤ 50`).

## Output

If “`black`” team wins output “`black`”, otherwise output “`grimy`”.

## Samples

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
1
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
grimy
</pre>
</td>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
4
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
black
</pre>
</td>
</tr>
</table>

