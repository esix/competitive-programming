# Isenbaev's Number [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1837)


Vladislav Isenbaev is a two-time champion of Ural, vice champion of TopCoder Open 2009, and absolute champion of ACM ICPC 2009. In the time you will spend reading this problem statement Vladislav would have solved a problem. Maybe, even two…

Since Vladislav Isenbaev graduated from the Specialized Educational and Scientific Center at Ural State University, many of the former and present contestants at USU have known him for quite a few years. Some of them are proud to say that they either played in the same team with him or played in the same team with one of his teammates…

Let us define Isenbaev's number as follows. This number for Vladislav himself is `0`. For people who played in the same team with him, the number is `1`. For people who weren't his teammates but played in the same team with one or more of his teammates, the number is `2`, and so on. Your task is to automate the process of calculating Isenbaev's numbers so that each contestant at USU would know their proximity to the ACM ICPC champion.

## Input

The first line contains the number of teams `n` (`1 ≤ n ≤ 100`). In each of the following n lines you are given the names of the three members of the corresponding team. The names are separated with a space. Each name is a nonempty line consisting of English letters, and its length is at most 20 symbols. The first letter of a name is capital and the other letters are lowercase.

## Output

For each contestant mentioned in the input data output a line with their name and Isenbaev's number. If the number is undefined, output “`undefined`” instead of it. The contestants must be ordered lexicographically.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
7
Isenbaev Oparin Toropov
Ayzenshteyn Oparin Samsonov
Ayzenshteyn Chevdar Samsonov
Fominykh Isenbaev Oparin
Dublennykh Fominykh Ivankov
Burmistrov Dublennykh Kurpilyanskiy
Cormen Leiserson Rivest
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
Ayzenshteyn 2
Burmistrov 3
Chevdar 3
Cormen undefined
Dublennykh 2
Fominykh 1
Isenbaev 0
Ivankov 2
Kurpilyanskiy 3
Leiserson undefined
Oparin 1
Rivest undefined
Samsonov 2
Toropov 1
</pre>
</td>
</tr>
</table>
