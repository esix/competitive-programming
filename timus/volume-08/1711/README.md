# Code Names [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1711)

Imagine that you have to prepare a problem set for the forthcoming programming contest and you have already chosen the problems you will use in it. Before you start writing problem statements, preparing tests, and writing author solutions, you must give code names to all the problems.

A code name is a string that uniquely identifies the problem. For example, instead of saying “problem about the cipher grille”, you can simply say “problem grille.”

The problems in a problem set are arranged according to the lexicographical order of their code names. However, the program committee wants to get a fixed order of the problems. For example, the easiest problem should be put on the first place so that all the teams will be able to find it, or the letter `D` can be assigned to a really Difficult problem. Therefore, to obtain some predefined order of the problems in the problem set, the program committee needs to carefully choose the code names. This is just what you have to do.

To make your task easier, the program committee proposed three variants of the code name for each of the `n` problems in the problem set. You only have to choose an appropriate variant for each problem.

## Input

The first line contains the number n of problems in the problem set (`1 ≤ n ≤ 16`). The `i`-th of the following `n` lines contains three possible code names for the `i`-th problem. The variants are separated with a space. The last line contains a permutation of the numbers from `1` to `n`. This is the order in which the problems must be arranged in the problem set. Each code name consists of lowercase Latin letters and its length is at most 20. All the code names are different.

## Output

Output `n` lines. The `i`-th line should contain the code name of the problem that will have number `i` in the problem set. If there are several possible answers, output any of them. If it is impossible to choose the code names as required, output “`IMPOSSIBLE`”.


## Samples

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
11
cipher grille kamkohob
names codenames codes
newtests rejudge timus
size volume summit
watchmen braineater twosides
solution random yesorno
keywords subversion commands
bosses shooting shaitan
game strategy playgame
mnemonic palindromes bestname
eligibility rectangle rules
2 1 7 10 9 6 11 3 8 4 5
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
codenames
grille
keywords
mnemonic
playgame
random
rectangle
rejudge
shaitan
volume
watchmen
</pre>
</td>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
3
problems in the
first sample are
ordered not randomly
1 2 3
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
IMPOSSIBLE
</pre>
</td>
</tr>
</table>
