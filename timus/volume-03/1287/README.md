# Mars Canals [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1287)

There is a quadrate area on the Mars surface wreathed in ideal net of canals. They plot the surface into equal squares (we neglect here the surface curvature). Each side of the quadrate area plotted into `N` square regions.

Archeological investigations showed that there was an ancient country Yatik in this area. The inhabitants cultivated a special grain — sir — that was a basis of their food ration. There is sir of two kinds: coarse-grained and small-grained. As a matter of fact, the end of Yatik empire started after the civil war between the fanciers of the sir sorts. But until recently noone new which of the parties won that time. The scientists look forward to guess the riddle on the grounds of the last voyage to Mars results. They found out which kind of sir was sowed the last in each square of Yatik. According to the ancient tradition sir was sowed in the sequence of squares (parallel to the north-south or east-west directions or at the angle 45° to them), one may suppose that the supporters of the party-winner made the longest sowings.

## Input

The first input line contains a size of the square area — `N` (`1 ≤ N ≤ 1400`). Then there follow `N` lines. Each of them consists of `N` symbols. A letter “`s`” in the `i`-th line and `j`-th row means that in the according square region small-grained sir was sowed the last, a letter “`S`” means that coarse-grained sir was sowed the last. You may assume that the inhabitants of the area sowed nothing but sir. Each square region was sowed with only one sort of sir.

## Output

The first line should contain a symbol “`s`”, if the party of small-grained sir fanciers won in the civil war. And symbol “`S`”, if the winners were the fanciers of the coarse-grained sir. If it’s impossible to define a winner then the first line should contain one symbol “`?`”. The second line should contain integer number — the maximal length of the one sort of sir sowing.

## Samples

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
3
SsS
sSs
SsS
</pre>
</td>
<td style="vertical-align: top">
<pre>
S
3
</pre>
</td>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
2
sS
Ss
</pre>
</td>
<td style="vertical-align: top">
<pre>
?
2
</pre>
</td>
</tr>
</table>
