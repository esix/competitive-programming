# [Map Coloring](https://acm.timus.ru/problem.aspx?space=1&num=1080)

We consider a geographical map with `N` countries numbered from `1` to `N` (`0 < N < 99`). For every country we know the numbers of other countries which are connected with its border. From every country we can reach to any other one, eventually crossing some borders. Write a program which determines whether it is possible to color the map only in two colors — red and blue in such a way that if two countries are connected their colors are different. The color of the first country is red. Your program must output one possible coloring for the other countries, or show, that such coloring is impossible.

## Input

On the first line is written the number `N`. On the following `N` lines, the `i`-th line contains the countries to which the `i`-th country is connected. Every integer on this line is bigger than `i`, except the last one which is `0` and marks that no more countries are listed for country `i`. If a line contains `0`, that means that the `i`-th country is not connected to any other country, which number is larger than `i`.

## Output

The output contains exactly one line. If the coloring is possible, this line must contain a list of zeros and ones, without any separators between them. The `i`-th digit in this sequence is the color of the `i`-th country. `0` corresponds to red color, and one — to blue color. If a coloring is not possible, output the integer `−1`.

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
2 0
3 0
0
</pre>
</td>
<td style="vertical-align: top">
<pre>
010
</pre>
</td>
</tr>
</table>
