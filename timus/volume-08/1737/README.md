# Mnemonics and Palindromes 3 [⬀](https://acm.timus.ru/problem.aspx?space=76&num=6)

As you remember, when Vasechkin was preparing a problem for the latest student contest, he spent a lot of time trying to invent an unusual and complex name for this problem. The name that Vasechkin had invented was so complex that none of the participants of that contest even started reading the statement of his problem.

After the contest, Chairman of the program committee announced that he refused to take part in the preparation of contests as long as such inappropriate people as Vasechkin worked on the program committee. That was how Vasechkin became the new Chairman of the program committee, and now he is preparing the next programming contest.

Vasechkin has decided that this time the names of all the problems will consist of the letters `a`, `b`, and `c` only and the length of each name will be equal to `n`. In addition, the names must be *extremely complex*. A name is extremely complex if none of its substrings consisting of at least two symbols is a palindrome. Help Vasechkin find all extremely complex names for the problems of the contest.

## Input

The only input line contains the integer `n` (`1 ≤ n ≤ 20000`).

## Output

Output all different extremely complex names of length `n` consisting of the letters `a`, `b`, and `c` only. The names should be given in the alphabetical order, one per line. If the total length of the names exceeds `100000` letters, output the only line “`TOO LONG`”.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
2
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
ab
ac
ba
bc
ca
cb
</pre>
</td>
</tr>
</table>
