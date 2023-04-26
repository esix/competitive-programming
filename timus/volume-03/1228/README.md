# Episode N-th: The Jedi Tournament [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1218)

Decided several Jedi Knights to organize a tournament once. To know, accumulates who the largest amount of Force. Brought each Jedi his lightsaber with him to the tournament. Are different the lightsaber, and Jedi different are. Three parameters there are: length of the saber, Force of the Jedi and how good the Light side of the Force the Jedi can use. If in at least two parameters one Jedi than the other one stronger is, wins he. Is not possible a draw, because no Jedi any equal parameter may have. If looses a Jedi, must leave the tournament he.

To determine, which Jedi the tournament can win, your program is. Can win the tournament a Jedi, if at least one schedule for the tournament possible is, when the last one remains he on the tournament, not looses any match. For example, if Anakin stronger than Luke by some two parameters is, and Luke stronger than Yoda by some two parameters is, and Yoda stronger than Anakin, exists in this case a schedule for every Jedi to win the tournament.

## Input

In the first line there is a positive integer `N ≤ 200`, the total number of Jedi. After that follow `N` lines, each line containing the name of the Jedi and three parameters (length of the lightsaber, Force, Light side in this order) separated with a space. The parameters are different integers, not greater than `100000` by the absolute value. All names are sequences of not more than 30 small and capital letters.

## Output

Your program is to output the names of those Jedi, which have a possibility to win the tournament. Each name of the possible winner should be written in a separate line. The order of the names in the output should correspond to the order of their appearance in the input data.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
5
Solo 0 0 0
Anakin 20 18 30
Luke 40 12 25
Kenobi 15 3 2
Yoda 35 9 125
</pre>
</td>
<td style="vertical-align: top">
<pre>
Anakin
Luke
Yoda
</pre>
</td>
</tr>
</table>
