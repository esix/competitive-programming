# Buttons [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1023)


## Background
As you surely already know, Yekaterinburg has gotten its right to hold The Summer Olympic Games of the 2032. It is planned that it will be allowed to Russia as a country-organizer to emend a program of the games a bit. So, in order to improve the command result it has been decided to replace the competition in gymnastics by the competition in the new game "Buttons".

The rules of the game are very simple. There’s a small heap of `K` buttons before two players. The players in turns take buttons from the heap, moreover, at a time one can take a number of buttons from `1` up to `L`. The one who takes the last button is the winner.

The rules of the Olympic Games will be a bit harder then usual. The one, who is to make a first step according to a lot, has an opportunity to fix a number `K` with the following restriction to it: `3 ≤ K ≤ 10⁸` (that is the exact number of buttons that has been prepared for the Olympic tournament). The player who is to make the second step fixes a number `L` that satisfies the following conditions `2 ≤ L < K`.

## Problem

A very crucial task is given to your team: you are to write a program that should help the second player to make his choice. In other words, given a number `K` your program is to find a number `L` that guaranties a victory to the second player with a proper game of both sides.
So, for instance, there are only three buttons in the heap, the choice `L = 2` provides for the victory of the second player. Really, if the first player takes only one button at his turn, the second one wins, taking the two last buttons. On the contrary, if the first one takes two buttons, the second one wins, taking the last button.

## Input

The standard input consists of one line, which contains an only integer number `K` — a number of buttons in the heap, that has fixed the first player at his turn.

## Output

To the standard output you are to write the only number `L` — the maximal number of buttons that can be taken at a time which provides for the victory of the second player. If there are several those numbers `L`, you should write the least. If there are no such numbers, you are to write `0` to the standard output.

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
</pre>
</td>
<td style="vertical-align: top">
<pre>
2
</pre>
</td>
</tr>
</table>
