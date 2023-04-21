# Two Teams [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1106)

The group of people consists of `N` members. Every member has one or more friends in the group. You are to write program that divides this group into two teams. Every member of each team must have friends in another team.

## Input

The first line of input contains the only number `N` (`N ≤ 100`). Members are numbered from `1` to `N`. The second, the third,…and the `(N+1)`th line contain list of friends of the first, the second, …and the `N`th member respectively. This list is finished by zero. Remember that friendship is always mutual in this group.

## Output

The first line of output should contain the number of people in the first team or zero if it is impossible to divide people into two teams. If the solution exists you should write the list of the first group into the second line of output. Numbers should be divided by single space. If there are more than one solution you may find any of them.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
7
2 3 0
3 1 0
1 2 4 5 0
3 0
3 0
7 0
6 0
</pre>
</td>
<td style="vertical-align: top">
<pre>
4
2 4 5 6
</pre>
</td>
</tr>
</table>
