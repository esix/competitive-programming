# Scholarship [⬀](https://acm.timus.ru/problem.aspx?space=1&num=2056)

At last the first term at the University came to its finish. Android Vasya has already passed all the exams and wants to know if he gets a scholarship. There is the following practice of giving scholarship to students at the University:

- if a student has got satisfactory marks, the scholarship is not given,
- if a student has passed through the examination period with only excellent marks, he gets a personal scholarship,
- if a student doesn’t get a personal scholarship and his average mark is not less than `4.5`, he gets a high scholarship,
- if a student gets neither high nor personal scholarship and doesn’t have satisfactory marks, he gets a common scholarship.

A satisfactory mark corresponds to value `3`, a good mark corresponds to value `4`, and an excellent mark corresponds to value `5`. An average mark for a student is the average value of all the marks this student got in his exams. Help Vasya find out which scholarship he gets.

## Input

The first line contains an integer `n` that is the number of exams (`1 ≤ n ≤ 10`). In the `i`-th of the next n lines there is an integer `mᵢ` that is value of Vasya’s mark in `i`-th exam (`3 ≤ mᵢ ≤ 5`).

## Output

If Vasya doesn’t get any scholarship output “`None`”. If he gets a common scholarship output “`Common`”, if he gets a high scholarship output “`High`”, if he gets a personal one output “`Named`”.

## Samples

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
3
5
5
4
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
High
</pre>
</td>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
3
3
3
3
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
None
</pre>
</td>
</tr>
</table>
