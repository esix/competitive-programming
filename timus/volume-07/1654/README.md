# Cipher Message [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1654)

Müller tried to catch Stierlitz red-handed many times, but always failed because Stierlitz could ever find some excuse. Once Stierlitz was looking through his email messages. At that moment, Müller entered secretly and watched a meaningless sequence of symbols appear on the screen. “A cipher message,” Müller thought. “UTF-8,” Stierlitz thought.

It is known that Stierlitz ciphers messages by the following method.

1. He deletes all spaces and punctuation marks.
2. He replaces all successive identical letters by one such letter.
3. He inserts two identical letters at an arbitrary place many times.

Try to restore a message as it was after the second step. For that, remove from the message all pairs of identical letters inserted at the third step.

## Input

The only input line contains a message ciphered by Stierlitz. The message consists of lowercase English letters and its length is at most 200000.

## Output

Output the restored message.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
wwstdaadierfflitzzz
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
stierlitz
</pre>
</td>
</tr>
</table>
