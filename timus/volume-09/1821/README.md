# Biathlon [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1821)

In a biathlon race with staggered starts the contestants start by turns with an interval of 30 seconds, that is why the contestant who finished first is not necessarily the first in the final results table. For example, if a biathlete who started second came to the finish 25 seconds later than the biathlete who started first, then she ran the race 5 seconds faster and would be placed higher in the results table.

Only three years remain until the 2014 Winter Olympic Games, which will be held in the city of Yekaterinozavodsk. A new biathlon course is almost complete, and the shooting range and stands have already been built.

It is planned to mount an electronic scoreboard near the stands. During a race the scoreboard will show the name of the contestant with the current best result. You are asked to write a program to determine such a contestant. You have taken the final protocol of the recent Biathlon World Championships as initial data for testing your program. The protocol contains the names of biathletes and their running times. The names are given in the order of starts. To verify the correctness of the program, you should find all contestants whose names must appear on the scoreboard.

## Input

The first line contains the number of biathletes participating in the race `n` (`1 ≤ n ≤ 100`). In the `i`-th of the following `n` lines you are given the name of the contestant who was `i`-th to start and, after a space, the contestant's running time in the format “`mm:ss.d`” given with an accuracy of tenths of a second. It is guaranteed that no two contestants finished simultaneously and no two contestants showed the same result. The name of a biathlete is a nonempty string consisting of English letters of length at most 20. The first letter of a name is capital and the other letters are small. The names of all the contestants are different.

## Output

In the first line output the number of biathletes who were leaders of the race immediately after their finish. Then output the names of these contestants in the lexicographic order, one per line.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
6
Zaitseva 21:38.2
Hauswald 21:21.0
Boulygina 22:04.4
Henkel 22:06.1
Wilhelm 21:11.1
Jonsson 22:05.8
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
3
Hauswald
Wilhelm
Zaitseva
</pre>
</td>
</tr>
</table>
