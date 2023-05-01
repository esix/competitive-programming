# Team.GOV! [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1688)

*All names in this problem are fictitious; the coincidences are accidental.*

As a result of a strange set of circumstances, Ivan became a member of the team named Ural SU Team.GOV. Vadim and Alex, being permanent members of the team, declared to Ivan that nobody had yet left the team just so easily: the charge for leaving the team was `n` rubles. As soon as Ivan bought for Vadim and Alex beer for `n` rubles, he would be allowed to leave Team.GOV and enter any other team.

At first Ivan was distressed with that news, but then he understood that it was not so bad to be in Team.GOV. The point was that every time the team visited a restaurant, Vadim paid for all three of them. After several such visits, Ivan realized that he had already saved quite a sum of money. He decided to write down the sums that the team paid in restaurants and leave the team as soon as the money Vadim had paid for him exceeded n rubles. You may assume that the three members of the team order the same set of dishes; it means that if each of them paid for himself, they would have to divide the sum in the bill by `3`.

## Input

In the first line you are given the charge `n` for leaving Team.GOV and the number m of visits to restaurants (`n` is integer; `1 ≤ n ≤ 2 · 10⁹`; `0 ≤ m ≤ 3000`). In the following `m` lines you are given the sums spent in the restaurants; these are integers in the range from `1` ruble to `2 million` rubles.

## Output

If Ivan can leave Team.GOV after `x` visits to restaurants, output “`Free after x times.`” Otherwise, output “`Team.GOV!`”

## Samples

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
1666 5
2000
1024
900
1156
1200
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
Free after 4 times.
</pre>
</td>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
3000 5
2000
1024
900
1156
1200
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
Team.GOV!
</pre>
</td>
</tr>
</table>
