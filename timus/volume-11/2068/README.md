# Game of Nuts [⬀](https://acm.timus.ru/problem.aspx?space=1&num=2068)

The war for Westeros is still in process, manpower and supplies are coming to an end and the winter is as near as never before. The game of thrones is unpredictable so Daenerys and Stannis decided to determine the true ruler of Seven Kingdoms playing more predictable and shorter game. For example, the game of nuts is the ideal candidate.

Rules of this game are quite simple. Players are given n heaps of nuts. There is an odd number of nuts in each heap. Players alternate turns. In each turn player chooses an arbitrary heap and divides it into three non-empty heaps so as there is again an odd number of nuts in each heap. The player who cannot make a move loses.

Daenerys has dragons so she moves first. Your task is to determine the winner assuming both Daenerys and Stannis play optimally. Please, do it and stop the war for Westeros!

## Input

In the first line there is an odd integer `n` (`1 ≤ n ≤ 777`).

In the second line there are `n` integers separated by spaces. These are the amounts of nuts in each heap at the beginning of the game. It is guaranteed that each heap contains not less than one and not more than `54321` nuts and this amount is an odd number.

## Output

Output "`Daenerys`" (without quotes) in case of Daenerys’ win. Otherwise output "`Stannis`".

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
3
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
Daenerys
</pre>
</td>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
3
1 1 1
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
Stannis
</pre>
</td>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
5
777 313 465 99 1
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
Daenerys
</pre>
</td>
</tr>
</table>
