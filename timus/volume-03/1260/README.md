# Nudnik Photographer [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1260)

*If two people were born one after another with one second difference and one of them is a child, then the other one is a child too. We get by induction that all the people are children.*

Everyone knows that the mathematical department of the Ural State University is a big family of `N` persons, `1, 2, 3, …, N` years old respectively.

Once the dean of the department ordered a photo if his big family. There were to be present all the students of the department arranged in one row. At first the dean wanted to arrange them by their age starting from the youngest student, but than he decided that it would look unnatural. Than he advised to arrange the students as follows:

1. The 1 year old student is to sit at the left end of the row.
2. The difference in ages of every two neighbors mustn’t exceed 2 years.

The dean decided that thereby the students would seem look as they were arranged by their ages (one can hardly see the difference in ages of 25 and 27 years old people). There exist several arrangements satisfying to the requirements. Photographer didn’t want to thwart dean’s desire and made the photos of all the possible mathematical department students’ arrangements.

## Input

There is the integer number `N`, `1 ≤ N ≤ 55`.

## Output

the number of photos made by the photographer.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
4
</pre>
</td>
<td style="vertical-align: top">
<pre>
4
</pre>
</td>
</tr>
</table>


# Notes

If `N = 4` then there are following possible arrangements: `(1,2,3,4)`, `(1,2,4,3)`, `(1,3,2,4)` and `(1,3,4,2)`.
