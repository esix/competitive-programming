# Spammer [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1496)

There is a famous spammer among our friends. In the end of every contest he is submitting his incorrect solutions at the speed of a machine-gun. In addition, he cheats by means of using several accounts for debugging. The judges eventually decided to disqualify the spammer. For that, they first want to discover all of his debugging accounts. The judges know which teams submitted their solutions in the last ten minutes of a contest. They regard as the spammer's debugging accounts all accounts which submitted solutions at least twice during the last ten minutes of the contest. Your task is to find these accounts.

## Input

The first line contains the number `N` of submissions in the last 10 minutes (`0 ≤ N ≤ 100`). The next `N` lines contain the names of teams which submitted their solutions in this period. The names contain only digits and lowercase English letters. Each name is not longer than 30 symbols.

## Output

Output in an arbitrary order all accounts which, in the judges' opinion, are used by the spammer.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
11
naucoder
iceman
abikbaev
abikbaev
petr
abikbaev
abikbaev
x
abikbaev
acrush
x
</pre>
</td>
<td style="vertical-align: top">
<pre>
x
abikbaev
</pre>
</td>
</tr>
</table>
