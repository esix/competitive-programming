# Grand Theft Array V [⬀](https://acm.timus.ru/problem.aspx?space=1&num=2000)

A long anticipated game called Grand Theft Array V is about to appear in shops! What, haven’t you heard of it? Then we must tell you all about it!

The gameplay in GTA V takes place on a one-dimensional array of integers. The game has two players, each player has his own specified starting position. Players move in turns. During each turn a player takes a number written in his current cell, then writes a zero in it and moves to the left or right adjacent cell. Naturally, the player cannot move beyond the boundaries of the array. At some moment of time two players can be located in the same cell. A player’s score is the sum of all numbers he earns during the game. The game ends when zeroes are written in all cells of the array.

Now please calculate the maximum number of points the first and the second player can get (the first player moves first, naturally), if they play optimally well, that is, if they try to maximize their score and if there are multiple variants of maximizing one’s own score, they try to minimize the opponent’s score.

## Input

The first line contains an integer `n` that is the size of array (`10 ≤ n ≤ 10⁵`). The second line contains n integers representing the initial array. All elements of the array are non-negative and do not exceed `10 000`. The third line contains two integers that are the starting positions of the first and the second player, correspondingly. The cells of the array are indexed starting from one.

## Output

Output the score of the first and the second player correspondingly if both play optimally well.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
10
1 2 3 4 5 6 7 8 9 0
4 8
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
21 24
</pre>
</td>
</tr>
</table>
