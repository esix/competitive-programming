# One Step from Happiness [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1493)

Vova bought a ticket in a tram of the 13th route and counted the sums of the first three and the last three digits of the ticket's number (the number has six digits). It turned out that the sums differed by one exactly. "I'm one step from happiness," Vova thought, "either the previous or the next ticket is lucky." Is he right?

## Input

The input contains the number of the ticket. The number consists of six digits, some of which can be zeros. It is guaranteed that Vova counted correctly, i.e., that the sum of the first three digits differs from the sum of the last three digits by one exactly.

## Output

Output "`Yes`" if Vova is right and "`No`" otherwise.

## Samples

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
715068
</pre>
</td>
<td style="vertical-align: top">
<pre>
Yes
</pre>
</td>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
445219
</pre>
</td>
<td style="vertical-align: top">
<pre>
No
</pre>
</td>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
012200
</pre>
</td>
<td style="vertical-align: top">
<pre>
Yes
</pre>
</td>
</tr>
</table>

## Notes

All tram tickets have exactly six digits. A ticket is considered lucky if the sum of its first three digits equals the sum of its last three digits.
