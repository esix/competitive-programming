# Genealogical Tree [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1022)

## Background

The system of Martians’ blood relations is confusing enough. Actually, Martians bud when they want and where they want. They gather together in different groups, so that a Martian can have one parent as well as ten. Nobody will be surprised by a hundred of children. Martians have got used to this and their style of life seems to them natural.

And in the Planetary Council the confusing genealogical system leads to some embarrassment. There meet the worthiest of Martians, and therefore in order to offend nobody in all of the discussions it is used first to give the floor to the old Martians, than to the younger ones and only than to the most young childless assessors. However, the maintenance of this order really is not a trivial task. Not always Martian knows all of his parents (and there’s nothing to tell about his grandparents!). But if by a mistake first speak a grandson and only than his young appearing great-grandfather, this is a real scandal.

## Problem
Your task is to write a program, which would define once and for all, an order that would guarantee that every member of the Council takes the floor earlier than each of his descendants.

## Input

The first line of the standard input contains an only number `N`, `1 ≤ N ≤ 100` — a number of members of the Martian Planetary Council. According to the centuries-old tradition members of the Council are enumerated with integers from `1` up to `N`. Further, there are exactly `N` lines, moreover, the `i`-th line contains a list of i-th member’s children. The list of children is a sequence of serial numbers of children in a arbitrary order separated by spaces. The list of children may be empty. The list (even if it is empty) ends with `0`.

## Output

The standard output should contain in its only line a sequence of speakers’ numbers, separated by spaces. If several sequences satisfy the conditions of the problem, you are to write to the standard output any of them. At least one such sequence always exists.

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
0
4 5 1 0
1 0
5 3 0
3 0
</pre>
</td>
<td style="vertical-align: top">
<pre>
2 4 5 3 1
</pre>
</td>
</tr>
</table>