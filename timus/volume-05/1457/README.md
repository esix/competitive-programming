# Heating Main [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1457)

## Background
I like my hometown very much. Those dilapidated buildings rising proudly above the city and streets dug up as far back as the last century inspire me greatly. Crowds of everlastingly offended working class representatives, students escaping the army, retirees hunting for empty bottles, extremely nice vagrants and amiable young people wearing black caps, leather jackets and baseball bats - all of them are so close to me.

Furthermore, an old man lives in the city. To be more precise, he had lived in the city until his house was demolished and a new casino was built on its place. No wonder, because the casino is much more useful for the city than some old man. The foundations of market economy are impossible to resist.

So the old man had to resettle into a heating main, which lies straight under the city. Despite all its disadvantages, inhabitation in a heating main implies free water supply, heating and no rent at all. In short, the old man is going to live a worth old age. Thank the government and the President for such a great concern.

No matter how gorgeous a life in the heating main is, it is necessary for the old man to get out from the heating main to the city and visit one of some important places. Sometimes he has to make sure that there are no free drugs at the clinic, provide himself with foodstuffs at the market dump, get a pension at the post-office or give this pension to the grandson - it is just enough to buy an ice cream!

## Problem

The heating main was build under Stalin, so it is a straight branchless tunnel. Each point of it is defined by its main offset. The main offset of the start point, which is located under the courthouse, is zero. The distance between any two points of the heating main equals to the absolute value of the difference between their main offsets.

It appeared that the heating main lies under all `N` places visited by the old man. For each gulley, which leads from the heating main straight to one of the places, the main offset `P[i]` was found. The old man can get out from the heating main through these gulleys only. If he tries to use another gulley, he would be immediately caught by watchful policemen as a dangerous vagrant.

The old man is rather old, and his effort to pass some distance is **proportionate to the square of this distance**. That is why the old man would like to live in some point of the heating main so that the arithmetic mean of the efforts to reach each of the places is minimal.

## Input

The first line contains the integer number `N` (`1 ≤ N ≤ 1000`). The second line contains `N` integer numbers `P[i]` (`0 ≤ P[i] ≤ 10⁶`).

## Output

You should output the main offset of the desired point. The offset should be printed with at least six digits after decimal point. If the problem has several solutions, you should output any of them.

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
7 4 5
</pre>
</td>
<td style="vertical-align: top">
<pre>
5.333333
</pre>
</td>
</tr>
</table>
