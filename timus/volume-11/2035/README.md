# Another Dress Rehearsal [⬀](https://acm.timus.ru/problem.aspx?space=1&num=2035)

If you have a long history of participating in programming contests, you should know that the dress rehearsal is the most important part of a contest. There are permanent participants who attend contests not because of results or promotional gifts from sponsors but specially to solve a new quiz prepared by Alexander Ipatov.

At Ural programming contests, dress rehearsals are made into a cult, and their problems are often prepared more thoroughly than the problems of main contests. For example, have you ever seen rejudging at a dress rehearsals? Now you understand it.

But however difficult problems the organizers prepare for a dress rehearsal, there is always the good old `A + B`. Do you think it is simply copied from one contest to another? Of course not! Any self-respecting organizing committee considers it its duty to prepare its own `A + B` problem with negative numbers and int64.

A contest is approaching, and Kirill has prepared a superdifficult set of tests and answers to them. Unfortunately, he forgot to backup the tests, and, after an update of the Hardsoft Doors operating system, all the test were lost. It will take some time before Kirill invents the Awesome Backup System, but that’s a different story.

Now Kirill has to recover the lost tests as soon as possible. He has answers to the tests, and he remembers that the summands `A` and `B` were integers such that `0 ≤ A ≤ X` and `0 ≤ B ≤ Y`. Help Kirill recover the tests!

## Input

The only input line contains integers `X`, `Y`, and `C` separated with a space (`0 ≤ X, Y, C ≤ 10⁹`).

## Output

Find integers `A` and `B` such that `0 ≤ A ≤ X`, `0 ≤ B ≤ Y`, and `A + B = C`.

If Kirill is wrong and there are no such integers, output “`Impossible`” (without quotation marks). Otherwise, output the integers `A` and `B` separated with a space. If there are several pairs satisfying the conditions, output any of them.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
2 7 5
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
2 3
</pre>
</td>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
9 15 100
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
Impossible
</pre>
</td>
</tr>
</table>
