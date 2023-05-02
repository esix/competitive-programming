# Neo-Venice [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1902)

Mars was the first planet colonized by humans. After a long terraforming process its appearance has changed completely. From the red desert it has become a blue planet covered by water. There was so much water that some of the cities were built not on land, but on stilts over the water. The most famous one was Neo-Venice. There are canals instead of roads and numerous gondolas instead of cars in this city. All this attracts huge crowds of tourists from the Earth to Neo-Venice. The most popular activities among them are boat excursions. Gondolas are steered by young girls who can not only bring tourists through the canals but also tell them about the history of the city or sing a song along the way. Due to their love for the water these girls are called undines.

The undine Anna has just received a license to steer a gondola. Tomorrow she will carry tourists on excursion to the St. Peter's canal. This canal is narrow, but many popular routes are passing through it, so there are always a lot of gondolas. Anna is afraid that her excitement may lead to a crash with another gondola during the excursion. However, all undines are trained to steer the gondola smoothly and with the same speed, so the only threat comes from gondolas sailing in the opposite direction. Anna knows the schedule of her colleagues and when she herself will enter the canal. Now she wants to know exactly when she will encounter other gondolas, in order to be extra careful around them.

## Input

The first line of the input contains integers `n`, `t` and `s`. `n` is the number of undines who will go through the St. Peter’s canal in the opposite direction (`1 ≤ n ≤ 100`). `t` is the time needed for the gondola to sail through the entire length of the canal (`1 ≤ t ≤ 100`). `s` is the moment of time at which the Anna's gondola will enter the canal (`360 ≤ s ≤ 1200`). The second line contains integers `s₁`, …, `sn` that define the moments of time at which the gondolas of Anna’s colleagues will appear on the opposite side of the canal. `s − t < s₁ < … < sₙ < s + t`.

## Output

Output `n` numbers that are the points of time when Anna will meet her colleagues, with absolute or relative error no more than `10⁻⁶`. Numbers should be separated with spaces or line feeds.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
2 60 600
600 630
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
630.000000
645.000000
</pre>
</td>
</tr>
</table>
