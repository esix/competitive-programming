# Penalty Time [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1636)

The `ZZZ` team failed once again. They took part in the contest in Yekaterinozavodsk and were the first to solve all the problems. They did it even before the monitor was frozen. However, in the table of final results they were only second, because the `QXX` team had a better total time. A member of the `QXX` team supposes that it happened because the participants were unpunctual and used dirty debug methods. However, the captain of the `ZZZ` team claims that their complicated tactics had to be blamed for the failure, because even if all their solutions had been accepted in the first run the team would still have taken the second place. Find out which of them is right.

## Input

The first line contains the total times in minutes `T₁` and `T₂` of the teams `QXX` and `ZZZ`, respectively, separated by a space (`250 ≤ T₁ ≤ T2 ≤ 2400`). In the second line there are 10 integers separated by a space; the ith integer is the number of rejected runs that the `ZZZ` team had when solving the ith problem. Recall that every rejected run increases the total time by 20 minutes.

## Output

Output “`No chance.`” if the rejected runs had no impact on the final place of the `ZZZ` team. Otherwise, output “`Dirty debug :(`”. If total times are equal, the teams are sorted alphabetically, so in this case the `ZZZ` team is in the second place.

## Samples

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
290 420
0 0 0 2 1 0 2 0 1 0
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
No chance.
</pre>
</td>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
300 719
0 0 0 0 0 0 21 0 0 0
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
Dirty debug :(
</pre>
</td>
</tr>
</table>
