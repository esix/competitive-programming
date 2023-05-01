# One and a Half Diggers [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1756)

Vitya Perestukin is solving the following problem: Three diggers can dig a trench in exactly one day. How many diggers are needed to dig the same trench in exactly two days? Vitya has concluded that one and a half diggers are needed. But there can't be such an answer. Actually, two diggers are needed: on the first day only one digger will work, and on the second day they both will work.

It is known that m diggers can dig a trench in exactly `d₁` days if they all work every day. Help Vitya compile a work schedule according to which a minimal number of diggers can dig a trench in exactly `d₂` days.

## Input

The only input line contains the integers `m`, `d₁`, and `d₂` (`1 ≤ m, d₁, d₂ ≤ 10 000`).

## Output

In the only line output `d₂` integers, which are the numbers of diggers that should work on each of the days so that the trench will be dug in time. It is possible that on some days (including the last day) nobody will work. If there are several solutions, output any of them.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
3 1 2
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
1 2
</pre>
</td>
</tr>
</table>
