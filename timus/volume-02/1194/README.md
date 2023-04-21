# Handshakes [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1194)

A party at the "Prancing Pony" tavern was over and the hobbits were breaking up. At the first crossroad all the company fell into several groups, each of which went its own way. As a matter of courtesy, the hobbits shook each other's hands before parting (each hobbit shook the hand of each hobbit he was parting with). Each group fell at the next crossroad into several smaller groups (with handshakes of course) and so on. This process continued until single hobbits and married couples reached their homes. In other words, the groups were splitting up until there were only groups of two or one hobbits left. Your task is to calculate the number of the handshakes made.

## Input

Let's numbers the groups of hobbits so that the first group (the one that left the tavern) gets number 1 and other groups get distinct positive integers greater than 1. In the first line of the input there are the total number of hobbits `N` and the number of married couples `K`. These numbers meet the following conditions: `2 < N ≤ 20000`; `0 ≤ 2K ≤ N`. Each of the next lines of the input starts with the number of the group and the number of groups it fell into. After that there are several pairs of numbers representing the number and size of each new group. It is guaranteed that if a group no. `Y` formed as a result of splitting of a group no. `X`, then the description of the group no. `X` occurs before the description of the group no. `Y`. In particular, this means that the description of the group no. 1 is in the second line of the input. If the group no. `Y` formed as a result of splitting of the group no. `X` and its description is absent, then the group no. `Y` didn't split further.

## Output

Output the total number of the handshakes made.


## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
3 0
1 2 2 2 3 1
2 2 4 1 5 1
</pre>
</td>
<td style="vertical-align: top">
<pre>
3
</pre>
</td>
</tr>
</table>
