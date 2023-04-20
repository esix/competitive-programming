# Brave Balloonists [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1049)


Ten mathematicians are flying on a balloon over the Pacific ocean. When they are crossing the equator they decide to celebrate this event and open a bottle of champagne. Unfortunately, the cork makes a hole in the balloon. Hydrogen is leaking out and the balloon is descending now. Soon it will fall into the ocean and all the balloonists will be eaten by hungry sharks.

But not everything is lost yet. One of the balloonists can sacrifice himself jumping out, so that his friends would live a little longer. Only one problem still exists: who is the one to get out. There is a fair way to solve this problem. First, each of them writes an integer `aᵢ` not less than `1` and not more than `10000`. Then they calculate the magic number `N` that is the number of positive divisors of the product `a₁*a₂*…*a₁₀`. For example, the number of positive integer divisors of `6` is `4` (they are `1`,`2`,`3`,`6`). The hero (a mathematician who will be thrown out) is determined according to the last digit of `N`. Your task is to find this digit.

## Input

Input contains ten integer numbers (each number is in separate line).

## Output

Output a single digit from `0` to `9` — the last digit of `N`.


## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
1
2
6
1
3
1
1
1
1
1
</pre>
</td>
<td style="vertical-align: top">
<pre>
9
</pre>
</td>
</tr>
</table>
