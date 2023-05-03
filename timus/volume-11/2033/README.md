# Devices [⬀](https://acm.timus.ru/problem.aspx?space=1&num=2033)

Students of the Department of Mathematics and Mechanics enjoy buying modern devices. Not having much money, they buy new devices rarely but expertly. They trust their friends’ opinion and choose a device of the type that the greatest number of their friends have. If there are several such devices, the students choose the cheapest of them. Student Ilya is no exception. He has questioned his six friends and now wants to choose a new device according to the above rule. Note that the friends could buy the same device in different places at different prices, and Ilya can buy this device at the smallest price.

## Input

The input contains descriptions of devices of six friends. Each description is in three lines. You are given the name of a friend in the first line, the name of this friend’s device in the second line, and the price of the device in the third line.

All the words are strings of size from `1` to `20` characters. The friends’ names contain only lowercase English letters, and the names of the devices consist of lowercase English letters and digits. The price is an integer from `1` to `10⁶`. The names of the friends may coincide.

## Output

In the only line output the name of the device in possession of the greatest number of friends. If there are several such devices, output the name of the cheapest of them. If there are again several such devices, output the name of any of them.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
oleg
nexus4
13000
kirill
kurtka
20000
den
nexus4
12000
nikita
htc
10000
mikhail
nexus4
14000
alexey
htc
9500
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
nexus4
</pre>
</td>
</tr>
</table>
