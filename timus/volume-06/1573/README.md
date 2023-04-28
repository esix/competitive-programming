# Alchemy [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1573)


Lich Sandro recently became an expert in alchemy and is very glad because of it. Sure enough, because this skill allows to mix simple potions to obtain more complex ones. Any character (even not skilled in alchemy) is able to make 3 simple potions: red, blue, and yellow. A single reagent is sufficient to make any of them, but the same reagent cannot be used to make potions of different colors. All reagents can be divided into 3 groups according to this rule: yellow (sulphur, unicorn's horn, a poppy boll…), blue (a piece of a meteor, a fang of a dragon turtle…) and red (dragon's eye, ruby, gog's blood…).

Every character would like to prepare other potions. In order to achieve that it is necessary to learn alchemy and to upgrade this skill. A novice alchemist is able to mix the basic potions: yellow and red, red and blue, or blue and yellow to obtain an orange, violet or green potion, respectively. These potions are called composite. An expert alchemist is also able to mix basic and composite potions without messing up their layers (this may lead to an explosion!).

Sandro has 3 bags of reagents, and each bag contains reagents of only one color. There are `B` blue, `R` red, and `Y` yellow reagents. Sandro's collection of reagents is extraordinary, since all the reagents are different! `K` reagents of different colors are required to make a potion that makes it posssible to breathe under water. The recipe of this potion is known, and now Sandro would like to know the number of possible ways to prepare it.

## Input

The first line contains integers `B`, `R`, and `Y`; `1 ≤ B, R, Y ≤ 100`. Then the recipe of the potion is given: the second line contains a positive integer `K`; the next `K` lines contain the colors of the required reagents (“`Blue`”, “`Red`”, or “`Yellow`”). Each word occurs at most once.

## Output

Output the number of possible ways to choose a set of reagents to make the potion (sets differing in one or more reagent are considered different; the order of reagents in a set doesn't matter).

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
2 3 5
3
Red
Yellow
Blue
</pre>
</td>
<td style="vertical-align: top">
<pre>
30
</pre>
</td>
</tr>
</table>
