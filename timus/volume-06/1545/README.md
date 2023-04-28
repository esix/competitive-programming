# Hieroglyphs [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1545)

Vova is fond of anime. He is so enthusiastic about this art that he learned to communicate with his Japanese friends using their native language. However, for writing email messages Vova has to use Latin letters. He wants to type hieroglyphs from his keyboard. His team-mate Sergey, in order to help Vova, created an applet that makes it possible to write hieroglyphs by means of typing Latin letters on the keyboard. Each hieroglyph is represented by a sequence of two Latin letters. This correspondence is given in a special reference book compiled by Sergey. When the applet realizes that a sequence of Latin letters corresponding to a hieroglyph has been typed, it replaces the sequence with this hieroglyph.

When Vova started using Sergey's program, he quickly became bored of looking into the reference book so often. Help Sergey to upgrade the applet in such a way that for each typed Latin letter it would automatically supply a prompt helping to continue this letter to a sequence representing a hieroglyph.

## Input

The first line contains the number of hieroglyphs in Sergey's reference book `N` (`1 ≤ N ≤ 1000`). Each of the next `N` lines contains a sequence of two lowercase Latin letters corresponding to a hieroglyph. The next line contains a lowercase Latin letter entered by Vova.

## Output

Output sequences from the reference book that start with the given letter, one sequence per line, in an arbitrary order. If there are no such sequences, then output nothing.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
6
na
no
ni
ki
ka
ku
k
</pre>
</td>
<td style="vertical-align: top">
<pre>
ka
ki
ku
</pre>
</td>
</tr>
</table>
