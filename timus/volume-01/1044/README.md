# Lucky Tickets. Easy! [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1044)

The public transport administration of Ekaterinburg is anxious about the fact that passengers don’t like to pay for passage doing their best to avoid the fee. All the measures that had been taken (hard currency premiums for all of the chiefs, increase in conductors’ salaries, reduction of number of buses) were in vain. An advisor especially invited from the Ural State University says that personally he doesn’t buy tickets because he rarely comes across the lucky ones (a ticket is lucky if the sum of its first half of digits is equal to the sum of the second half of digits). So, the way out is found — of course, tickets must be numbered in sequence, but the number of digits on a ticket may be changed. Say, if there were only two digits, there would have been ten lucky tickets (with numbers `00`, `11`, `22`, `33`, `44`, `55`, `66`, `77`, `88`, `99`). Maybe under the circumstances the ratio of the lucky tickets to the common ones is greater? And what if we take four digits? A huge work has brought the long-awaited result: in this case there will be `670` lucky tickets. But what to do if there are six or more digits?

So you are to save public transport of our city. Write a program that determines a number of lucky tickets for the given number of digits `N`.

## Input

The only line contains an even integer `N` that is a number of digits in a ticket (`2 ≤ N ≤ 8`).

## Output

Output a number of tickets such that the sum of the first half of digits is equal to the sum of the second half of digits.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
4
</pre>
</td>
<td style="vertical-align: top">
<pre>
670
</pre>
</td>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
2
</pre>
</td>
<td style="vertical-align: top">
<pre>
10
</pre>
</td>
</tr>
</table>
