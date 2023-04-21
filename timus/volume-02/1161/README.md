# Stripies [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1161)


Our chemical biologists have invented a new very useful form of life called *stripies* (in fact, they were first called in Russian - *polosatiki*, but the scientists had to invent an English name to apply for an international patent). The stripies are transparent amorphous amebiform creatures that live in flat colonies in a jelly-like nutrient medium. Most of the time the stripies are moving. When two of them collide a new stripie appears instead of them. Long observations made by our scientists enabled them to establish that the weight of the new stripie isn't equal to the sum of weights of two disappeared stripies that collided; nevertheless, they soon learned that when two stripies of weights `m₁` and `m₂` collide the weight of resulting stripie equals to `2·sqrt(m₁m₂)`. Our chemical biologists are very anxious to know to what limits can decrease the total weight of a given colony of stripies.

You are to write a program that will help them to answer this question. You may assume that 3 or more stipies never collide together.

## Input

The first line contains one integer `N` (`1 ≤ N ≤ 100`) - the number of stripies in a colony. Each of next `N` lines contains one integer ranging from 1 to 10000 - the weight of the corresponding stripie.

## Output

The output must contain one line with the minimal possible total weight of colony with the accuracy of two decimal digits after the point.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
2
72
50
</pre>
</td>
<td style="vertical-align: top">
<pre>
120.00
</pre>
</td>
</tr>
<td style="vertical-align: top">
<pre>
3
72
30
50
</pre>
</td>
<td style="vertical-align: top">
<pre>
120.00
</pre>
</td>
</tr>
</table>
