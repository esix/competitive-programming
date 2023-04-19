# [Sacrament of the Sum](https://acm.timus.ru/problem.aspx?space=1&num=1021)

## Background
<i>
— The Brother of mine, the Head of Monastic Order wants to know tomorrow about the results long-term researches. He wants to see neither more nor less than the Summering Machine! Even moreover, he wants our Machine — only a machine — to demonstrate its comprehension of the Sacrament of the Sum as deeply as it is possible. He wants our Machine to find two numbers that give the sum equal to the Sacred Number 10 000.

— Tsh-sh-sh! This is madness that borders on blasphemy! How can the Machine calculate the Sacred Number? Twenty seven years we work on it, but we’ve could teach it to tell if the sum of two introduced numbers greater or lower than 10 000. Can an ordinary mortal find two numbers that there sum will be equal to 10 000?

— But we’ll have to do it with the help of our Machine, even if it is not capable. Otherwise we’ll have… let’s say, big problems, if it is possible to call boiling oil like this. However, I have an idea. Do you remember, last week we’ve entered two numbers -7 and 13 into the Machine, and it answered that their sum is lower than 10 000. I don’t know how to check this, but nothing’s left for us than to believe to the fruit of our work. Let’s enter now a greater number than -7 and start up the Machine again. We’ll do like this again and again until we find a number that being added to 13 will give us 10 000. The only thing we are to do is to prepare an ascending list of numbers.

— I don’t believe in this… Let’s start with the sum that is obviously greater than the Sacred Number and we’ll decrease one of the summand. So we have more chances to avoid boilin… big problems.
</i>

Haven’t come to an agreement, the Brothers went away to their cells. By next day everyone of them has prepared a list of numbers that, to his opinion, could save them… Can both of the lists save them together?

## Problem

Your program should decide, if it is possible to choose from two lists of integers such two numbers that their sum would be equal to 10 000.

## Input

You are given both of these lists one by one. Format of each of these lists is as follows: in the first line of the list the quantity of numbers `Nᵢ` of the `i`-th list is written. Further there is an i-th list of numbers each number in its line (`Nᵢ` lines).The following conditions are satisfied: `1 ≤ Nᵢ ≤ 50 000`, each element of the lists lays in the range from -32768 to 32767. The first list is ascending and the second one is descending.

## Output

You should write "`YES`" to the standard output if it is possible to choose from the two lists of integers such two numbers that their sum would be equal to 10 000. Otherwise you should write "`NO`".

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
-175
19
19
10424
3
8951
-424
-788
</pre>
</td>
<td style="vertical-align: top">
<pre>
YES
</pre>
</td>
</tr>
</table>
