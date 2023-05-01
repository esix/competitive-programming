# On the Benefits of Umbrellas [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1788)

A group of school leavers had their graduation party at an aquapark. They had a great time, but when they were leaving the aquapark they were surprised by a suddenly cold weather and a heavy rain, which made it quite a problem to get to the trolleybus stop.

It turned out that all the boys in the company had their umbrellas and all the girls were without umbrellas. Of course, each boy, being a real gentleman, volunteered to accompany one of the girls to the trolleybus stop under his umbrella.

If the `i`th girl gets wet under the rain, she'll get upset by gi units. If no girl accepts an invitation from the `j`th boy, he'll get upset by `bⱼ · k` units, where `k` is the number of luckier boys who will accompany girls under their umbrellas. The girls who will go under umbrellas and the accompanying boys will not get upset at all.

Help the boys and girls keep their holiday mood as unspoiled as possible. Determine how they should proceed to make the total upset minimal.

## Input

The first line contains the number of girls `n` and boys `m` in the group (`1 ≤ n, m ≤ 100`). The second line contains the girls' upsets `g₁`, …, `gₙ` separated with a space. The third line contains the boys' upset coefficients `b₁`, …, `bₘ` separated with a space. The numbers in the second and third lines are positive integers not exceeding `1000`.

## Output

Output the minimal possible total upset.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
2 4
1 100
10 8 6 4
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
19
</pre>
</td>
</tr>
</table>
