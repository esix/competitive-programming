# The Debut Album [⬀](https://acm.timus.ru/problem.aspx?space=1&num=2018)

Pop-group “Pink elephant” entered on recording their debut album. In fact they have only two songs: “My love” and “I miss you”, but each of them has a large number of remixes.

The producer of the group said that the album should consist of `n` remixes. On second thoughts the musicians decided that the album will be of interest only if there are no more than `a` remixes on “My love” in a row and no more than `b` remixes on “I miss you” in a row. Otherwise, there is a risk that even the most devoted fans won’t listen to the disk up to the end.

How many different variants to record the album of interest from `n` remixes exist? A variant is a sequence of integers `1` and `2`, where ones denote remixes on “My love” and twos denote remixes on “I miss you”. Two variants are considered different if for some `i` in one variant at `i`-th place stands one and in another variant at the same place stands two.

## Input

The only line contains integers `n`, `a`, `b` (`1 ≤ a, b ≤ 300`; `max(a,b) + 1 ≤ n ≤ 50 000`).

## Output

Output the number of different record variants modulo `10⁹+7`.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
3 2 1
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
4
</pre>
</td>
</tr>
</table>

## Notes

In the example there are the following record variants: `112`, `121`, `211`, `212`.

