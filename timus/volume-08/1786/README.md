# Sandro's Biography [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1786)

Leogius was searching in a library for a book recommended to him by the teacher of theoretical magic. Suddenly he found an ancient chronicle written on several sheets of parchment. Having looked through it, Leogius understood that it described the life and amazing adventures of a lich. Could it be the biography of Lich Sandro that had been lost many centuries ago? If so, the manuscript had to be shown to the Supreme Council of Magicians as soon as possible. But there was one problem: the text contained no mention of the name Sandro. What could be done? The Council might not believe that the chronicle recounted Sandro's life.

Leogius decided to correct the manuscript. He found a magician who was willing to do it. But a good job had to be paid well. The proofreader agreed to replace any letter by any other same-case letter (an uppercase letter by an uppercase letter and a lowercase letter by a lowercase letter) for five gold coins. He also could change the case of any letter for five gold coins. Help Leogius determine the minimal quantity of gold coins he had to pay to make the string “`Sandro`” appear in the text.

## Input

The only line contains the text of the manuscript. It consists of lowercase and uppercase English letters. The number of letters in the text is at least six and at most 200.

## Output

Output the minimal quantity of gold coins that must be paid to make the name Sandro appear in the text.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
MyNameIsAlexander
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
20
</pre>
</td>
</tr>
</table>

## Notes

In the example the corrector will have to perform four operations after which the line will sequentially take the following form: “`MyNameIsAlesander`”, “`MyNameIsAlesandrr`”, “`MyNameIsAlesandro`”, and “`MyNameIsAleSandro`”.
