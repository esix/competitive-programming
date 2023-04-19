# [Democracy in Danger](https://acm.timus.ru/problem.aspx?space=1&num=1025)

## Background

In one of the countries of Caribbean basin all decisions were accepted by the simple majority of votes at the general meeting of citizens (fortunately, there were no lots of them). One of the local parties, aspiring to come to power as lawfully as possible, got its way in putting into effect some reform of the election system. The main argument was that the population of the island recently had increased and it was to longer easy to hold general meetings.

The essence of the reform is as follows. From the moment of its coming into effect all the citizens were divided into `K` (may be not equal) groups. Votes on every question were to be held then in each group, moreover, the group was said to vote “for” if more than half of the group had voted “for”, otherwise it was said to vote “against”. After the voting in each group a number of group that had voted “for” and “against” was calculated. The answer to the question was positive if the number of groups that had voted “for” was greater than the half of the general number of groups.

At first the inhabitants of the island accepted this system with pleasure. But when the first delights dispersed, some negative properties became obvious. It appeared that supporters of the party, that had introduced this system, could influence upon formation of groups of voters. Due to this they had an opportunity to put into effect some decisions without a majority of voters “for” it.

Let’s consider three groups of voters, containing 5, 5 and 7 persons, respectively. Then it is enough for the party to have only three supporters in each of the first two groups. So it would be able to put into effect a decision with the help of only six votes “for” instead of nine, that would be necessary in the case of general votes.

## Problem

You are to write a program, which would determine according to the given partition of the electors the minimal number of supporters of the party, sufficient for putting into effect of any decision, with some distribution of those supporters among the groups.

## Input

In the first line an only odd integer `K` — a quantity of groups — is written (`1 ≤ K ≤ 101`). In the second line there are written `K` odd integers, separated with a space. Those numbers define a number of voters in each group. The population of the island does not exceeds 9999 persons.

## Output

You should write a minimal quantity of supporters of the party, that can put into effect any decision.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
3
5 7 5
</pre>
</td>
<td style="vertical-align: top">
<pre>
6
</pre>
</td>
</tr>
</table>
