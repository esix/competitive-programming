# Salary [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1123)


All employees of SKB Kontur like to get their salaries. Often and in large quantities. But the company management is of a bit different opinion and pays out strictly once a month. After some consultations the employees decided that if one of the parameters (frequency of payment) was fixed it was possible to change the second parameter (amount of the money paid out). They contrived the following scheme. A group of employees who proudly call themselves mathematics and mechanics faculty graduates visits the management and using their mathematical authority claims that the computers in the company's accounts department will work more efficiently if salaries of all the employees take the form of palindromes. As you know, a numerical palindrome is a number that does not change when you read it from right to left. For example, `12344544321` is a palindrome and `12345543210` is not. Of course, the management had to agree with this proposal, but upon one condition: each employee had to re-count his or her salary so that the salary took the form of the least possible palindrome that is greater than or equal to the original salary. You are asked to help the employees of SKB Kontur.

## Input

consists of one string containing the original salary of an employee. The string is not longer than 2001 symbols.

## Output

should consist of one string containing the new salary calculated according to the above rules.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
12341321
</pre>
</td>
<td style="vertical-align: top">
<pre>
12344321
</pre>
</td>
</tr>
</table>
