# Scientific Conference [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1203)

Functioning of a scientific conference is usually divided into several simultaneous sections. For example, there may be a section on parallel computing, a section on visualization, a section on data compression, and so on.

Obviously, simultaneous work of several sections is necessary in order to reduce the time for scientific program of the conference and to have more time for the banquet, tea-drinking, and informal discussions. However, it is possible that interesting reports are given simultaneously at different sections.

A participant has written out the time-table of all the reports which are interesting for him. He asks you to determine the maximal number of reports he will be able to attend.

## Input

The first line contains the number `1 ≤ N ≤ 100000` of interesting reports. Each of the next `N` lines contains two integers `Tₛ` and `Tₑ` separated with a space (`1 ≤ Tₛ < Tₑ ≤ 30000`). These numbers are the times a corresponding report starts and ends. Time is measured in minutes from the beginning of the conference.

## Output

You should output the maximal number of reports which the participant can attend. The participant can attend no two reports simultaneously and any two reports he attends must be separated by at least one minute. For example, if a report ends at 15, the next report which can be attended must begin at 16 or later.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
5
3 4
1 5
6 7
4 5
1 3
</pre>
</td>
<td style="vertical-align: top">
<pre>
3
</pre>
</td>
</tr>
</table>
