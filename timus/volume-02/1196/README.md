# History Exam [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1196)

Professor of history decided to simplify the examination process. At the exam, every student should write a list of historic dates she knows (she should write the years only and, of course, must be able to explain what event took place in this or that year). Professor has a list of dates that students must know. In order to decide upon the student's mark, Professor counts the number of dates in the student's list that are also present in his list. The student gets her mark according to the number of coincidences.

Your task is to automatize this process. Write a program that would count the number of dates in the student's list that also occur in Professor's list.

## Input

The first line contains the number `N` of dates in Professor's list, `1 ≤ N ≤ 15000`. The following `N` lines contain this list, one number per line. Each date is a positive integer not exceeding `10⁹`. Professor's list is sorted in non-descending order. The following line contains the number `M` of dates in the student's list, `1 ≤ M ≤ 10⁶`. Then there is the list itself; it is unsorted. The dates here satisfy the same restriction. Both in Professor's and in the student's lists dates can appear more than once.

## Output

Output the number of dates in the student's that are also contained in Professor's list.


## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
2
1054
1492
4
1492
65536
1492
100
</pre>
</td>
<td style="vertical-align: top">
<pre>
2
</pre>
</td>
</tr>
</table>
