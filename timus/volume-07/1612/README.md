# Tram Forum [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1612)

Tram, trolleybus, and bus drivers talk at the tram forum. We have read all messages posted at the forum during last month and discovered an interesting rule. Users in whose messages the word “`tram`” occurs more often than the word “`trolleybus`” are tram drivers. Similarly, users in whose messages the word “`trolleybus`” is more frequent than the word “`tram`” are trolleybus drivers. All other users of the tram forum are bus drivers. Given this information, can you determine who has posted the latest message at the tram forum?

## Input

You are given the latest message at the tram forum. The message consists of lowercase English letters, spaces, line breaks, and punctuation marks: periods, commas, dashes, colons, and exclamation and question marks. The total length of the message is at most 10000 symbols. Words consist of letters and can be separated by spaces, line breaks, and punctuation marks.

## Output

Output “`Tram driver`” if the user who has posted the latest message is a tram driver; output “`Trolleybus driver`” if she is a trolleybus driver; and output “`Bus driver`” if she is a bus driver.

## Samples

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
of course, tram is the best transport
in the world!
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
of course, tram is the best transport
in the world!
</pre>
</td>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
yes, yekaterinburg trams are the
best trams in the world, but
i like my trolleybus too.
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
Trolleybus driver
</pre>
</td>
</tr><tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
read forum.tr.ru every day!
you can learn much about tram 
drivers and trolleybus drivers.
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
Bus driver
</pre>
</td>
</tr>
</table>
