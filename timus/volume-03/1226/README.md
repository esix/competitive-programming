# esreveR redrO [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1226)

This task is quite unconventional. We do not describe the way you must transform the input, which is a plain text containing Latin letters and other possible characters (numeric digits, punctuation marks etc.) We only say that the word being a subject to transformations is considered to be a sequence of Latin letters (both uppercase and lowercase) that is followed by the end of line, or the end of file, or a character which is not a Latin letter.

So, write a program to convert this "scrambled" text into a readable form.

## Input

The input contains some ciphered text. The input contains no more than 1000 lines. The length of each line does not exceed 255 characters. The text may contain any printable characters.

## Output

The output must contain the deciphered text from the input.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
This is an example of a simple test. If you did not 
understand the ciphering algorithm yet, then write the 
letters of each word in the reverse order. By the way, 
"reversing" the text twice restores the original text.
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
sihT si na elpmaxe fo a elpmis tset. fI uoy did ton 
dnatsrednu eht gnirehpic mhtirogla tey, neht etirw eht 
srettel fo hcae drow ni eht esrever redro. yB eht yaw, 
"gnisrever" eht txet eciwt serotser eht lanigiro txet.
</pre>
</td>
</tr>
</table>
