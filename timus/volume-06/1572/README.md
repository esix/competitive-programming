# Yekaterinozavodsk Great Well [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1572)


About a month ago two teams of the Ural State University returned from the Yekaterinozavodsk training camp. This northern city impressed them so much that they decided to return there by any means. A well-known city legend says that the more covers of sewerage manholes you throw into the famous Great Well, the earlier you return to Yekaterinozavodsk. The programmers have already collected a lot of manhole covers from city streets and now they want to know how many of them can be thrown into the Well.

It is known that the Well's aperture and all manhole covers in Yekaterinozavodsk are circles, squares, or equilateral triangles. The covers can be regarded as absolutely flat, and you may rotate and move them in space in any way.

## Input

Let us denote a circle by 1, a square by 2, and a triangle by 3. This number will be the type of the figure. The size of a circle is its radius, the size of a square or triangle is the length of its side (the sides have equal lengths). The first line contains two numbers: the type and the size of the Great Well's aperture. The second line contains an integer `N`, which is the number of manhole covers collected by the programmers, `1 ≤ N ≤ 100`. These covers are described in the next `N` lines: each of them contains the type and the size of a cover; the numbers are separated with a space. Sizes of all figures are integers in the range from 1 to 100.

## Output

Output the number of covers that are small enough to be thrown into the Well.

## Samples

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
2 10
3
3 20
1 5
2 11
</pre>
</td>
<td style="vertical-align: top">
<pre>
2
</pre>
</td>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
1 5
2
2 10
1 6
</pre>
</td>
<td style="vertical-align: top">
<pre>
1
</pre>
</td>
</tr>
</table>
