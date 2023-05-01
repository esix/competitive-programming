# Chocolate 2 [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1639)

Little Boy is mad at Karlsson, who ate all the sweets in the flat and even went to the neighbours to eat their sweets too. Now Little Boy's parents brought home a chocolate bar, and, sure enough, Karlsson is here already and wants to eat it. However, this time Little Boy has firmly decided that not a single piece of chocolate will go to this glutton. Little Boy wants to use Karlsson's addiction to the games of chance and suggests playing the following game. A chocolate bar can be considered as a rectangle of square “units” arranged in `m` rows and `n` columns and separated by “lines”. Two players take alternate turns. At his turn, a player must take one piece of chocolate and split it into two along one of the lines. If a player can't make a legal move (which happens when all pieces of chocolate consist of a single unit square), he loses, and the winner takes all the chocolate.

But Karlsson is smart enough! He immediately understood who should make the first turn in order for Karlsson to win, assuming that players take optimal turns. Can you guess that?

## Input

The only line of the input contains space-separated integers `m` and `n` (`1 ≤ m, n ≤ 50`).

## Output

If Karlsson should start the game in order to win, output “`[:=[first]`”; otherwise, output “`[second]=:]`”.

## Samples

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
2 4
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
[:=[first]
</pre>
</td>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
1 3
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
[second]=:]
</pre>
</td>
</tr>
</table>
