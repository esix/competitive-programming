# Холодильник [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1683)

Once Ivanushka was lying on the stove as usually and meditating. And he came up with an idea: he should buy a fridge. So he bought a fridge and placed it near the stove. But the fridge was unsteady, because the floor in the house was wooden. Ivanushka found a way out. He decided to put something under a leg of the fridge so that it would become steady.

Ivanushka took a `1` cm wide and `n` cm long paper strip and started to fold it so as to obtain a paper square with a side of `1` cm consisting of `n` layers. It is exactly this thickness that was needed to make the fridge steady. Ivanushka folds the strip according to the following algorithm: he applies a ruler to measure off a whole number of centimeters from the left edge of the strip and folds the left part to the right (as a result, the left edge shifts to the right by the measured number of centimeters). Then he again measures off some number of centimeters from the new left edge and folds them to the right. He repeats this operation until the strip becomes `1` cm long.

Determine the minimal number of foldings Ivanushka has to do.

## Input

You are given the integer `n` (`1 ≤ n ≤ 10⁹`).

## Output

In the first line output the minimal number of paper foldings necessary to obtain the required number of layers. In the second line output the sequence of lengths in centimeters that Ivanushka measured off before each folding. Separate the numbers with a space.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
12
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
4
5 3 2 1
</pre>
</td>
</tr>
</table>
