# Magician [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1370)

Denis Mednoepole is a famous magician. For example, he can read spectators' minds and tell the random number that a spectator has got by means of Denis's magic machine. Any spectator can check this: he or she just rotates the wheel of the machine and looks at the 10-digit number that has appeared in the window of the machine. Within two seconds Denis will read the spectator's mind and tell the number.

You must write a program that will tell this number even faster — within one second. You need to know that the magic machine has a wheel with `N` digits written along the edge of the wheel without spaces between them. All digits are of the same width. The window is 10 digits wide, so it shows 10 successive digits. Each time the wheel turns "one digit" an audible click is produced. So you know how many clicks Denis Mednoepole heard while the spectator was rotating the wheel.

## Input

The first line contains two integers separated with a space, `N` and `M`. Here `N` (`11 ≤ N ≤ 1000`) is the number of the digits written on the wheel, and `M` (`1 ≤ M ≤ 32767`) is the number of clicks produced by the wheel. The next `N` lines contain all the digits written on the wheel, one digit per line. The digits are given in the clockwise order. The first ten digits correspond to the number visible in the window before the rotation. The wheel can be rotated only counter-clockwise, thus after one click the first digit will go out of site and the 11-th digit will become visible.

## Output

Write the number that will appear in the window of the magic machine after the rotation. The number must have exactly 10 digits and may contain leading zeroes.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
12 7
1
2
3
4
5
6
7
8
9
0
7
7
</pre>
</td>
<td style="vertical-align: top">
<pre>
8907712345
</pre>
</td>
</tr>
</table>
