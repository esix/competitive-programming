# [Binary Lexicographic Sequence](https://acm.timus.ru/problem.aspx?space=1&num=1081)


Consider all the sequences with length (`0 < N < 44`), containing only the elements `0` and `1`, and no two ones are adjacent (`110` is not a valid sequence of length 3, `0101` is a valid sequence of length 4). Write a program which finds the sequence, which is on `K`-th place (`0 < K < 10⁹`) in the lexicographically sorted in ascending order collection of the described sequences.

## Input

The first line of input contains two positive integers `N` and `K`.

## Output

Write the found sequence or `−1` if the number `K` is larger then the number of valid sequences.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
3 1
</pre>
</td>
<td style="vertical-align: top">
<pre>
000
</pre>
</td>
</tr>
</table>
