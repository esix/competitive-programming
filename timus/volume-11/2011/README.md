# Long Statement [⬀](https://acm.timus.ru/problem.aspx?space=1&num=2011)

Nikita, a schoolboy, is currently taking part in one of programming contests. He is really upset because all the problem statements are so long and unclear. So he took the statement of the first problem and cut it into pieces in such a way that each piece contained exactly one letter. After that, he threw away all pieces with letter other than “`a`”, “`b`” or “`c`”. Now he has only `n` pieces and wants to compile from them his own statement that should be shorter and clearer than the original one.

The new statement should be a single word compiled from all n letters placed in some order. Nikita wondered if he can compile at least six different words of length n from the letters. If this is not true, he will be ruined and will start solving other problems. Help Nikita to answer this monumental question!

## Input

The first line contains an integer `n` that is the number of pieces with letters (`1 ≤ n ≤ 100`). The second line describes these pieces as `n` integers from `1` to `3`. 1 represents a piece with letter “`a`”, `2` represents a piece with letter “`b`”, `3` represents a piece with letter “`c`”.

## Output

If Nikita can compile at least six different words of length `n`, output “`Yes`”. Otherwise output “`No`”.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
6
1 2 2 3 3 3
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
Yes
</pre>
</td>
</tr>
</table>
