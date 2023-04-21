# Conference [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1109)


On the upcoming conference were sent `M` representatives of country `A` and `N` representatives of country `B` (`M and N ≤ 1000`). The representatives were identified with `1`, `2`, …, `M` for country `A` and `1`, `2`, …, `N` for country `B`. Before the conference `K` pairs of representatives were chosen. Every such pair consists of one member of delegation `A` and one of delegation `B`. If there exists a pair in which both member `#i` of `A` and member `#j` of `B` are included then `#i` and `#j` can negotiate. Everyone attending the conference was included in at least one pair. The CEO of the congress center wants to build direct telephone connections between the rooms of the delegates, so that everyone is connected with at least one representative of the other side, and every connection is made between people that can negotiate. The CEO also wants to minimize the amount of telephone connections. Write a program which given `M`, `N`, `K` and `K` pairs of representatives, finds the minimum number of needed connections.

## Input

The first line of the input contains `M`, `N` and `K`. The following `K` lines contain the choosen pairs in the form of two integers `p₁` and `p₂`, `p₁` is member of `A` and `p₂` is member of `B`.

## Output

The output should contain the minimum number of needed telephone connections.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
3 2 4
1 1
2 1
3 1
3 2
</pre>
</td>
<td style="vertical-align: top">
<pre>
3
</pre>
</td>
</tr>
</table>
