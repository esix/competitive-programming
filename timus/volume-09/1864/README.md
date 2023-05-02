# Get-Together at Den's [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1864)

*Advertising for beer and beer-based beverages must not use images of people and animals. Russia's Federal Law “On Advertising”, Ch. 3, Art. 22*

Den invited `n` friends to his home. The friends were glad but first went to Auchan to buy some juice. The ith friend bought ai liters of juice. Then the friends came to Den and sat down to drink the juice. Everybody, including Den, drank the same amount of juice.

When there was no more juice, Misha started complaining about having bought more juice than he had drunk. Den didn't want Misha to get upset, so he took one hundred roubles out of his pocket and gave the money to Misha to compensate him for the juice he had bought but hadn't drunk himself. Then some more of Den's friends started complaining about the same issue. Den had no more money, so he suggested that all the friends who had bought more juice than they had drunk themselves should fairly divide his one hundred roubles between them. How should Den's friends divide the money? Assume that Den paid not only for the juice he had drunk but also for all the juice that had been drunk by the people who hadn't bought it.

## Input

The first line contains the number `n` of Den's friends (`2 ≤ n ≤ 100`). In the second line you are given the integers `a₁`, …, `aₙ` (`0 ≤ aᵢ ≤ 100`). The sum of all `aᵢ` is positive.

## Output

Output how much of the one hundred roubles the ith friend should take. Round the amounts down to an integer number of roubles.

## Samples

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
3
10 10 10
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
33 33 33
</pre>
</td>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
2
10 0
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
100 0
</pre>
</td>
</tr>
</table>
