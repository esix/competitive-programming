# Intervals [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1330)

*— Superstitions, prejudices… — said the stranger absent-mindedly. — Indolence of mind and envy, envy, shaggy envy… — He interrupted himself. — I beg your pardon, Aleksandr Ivanovich, I would dare to ask your permission to take away this ladle. Unfortunately, iron is almost not transparent for hyperfield, and growth of the hyperfield intensity in a small volume…*

After the Vybegallo’s “ideal consumer” incident in the Scientific Research Institute for Thaumaturgy and Spellcraft, an automatic security system is being put into operation urgently. It is to guarantee that in any case the total hyperfield intensity won’t exceed a critical value. They pin hopes on Sasha Privalov and his Aldan machine to automagically process readings of sensors that are located all over the Institute.

All the sensors are numbered with integers ranging from `1` to `N` (`1 ≤ N ≤ 10000`). The reading of ith hyperfield intensity sensor is integer `kᵢ` (`-10000 ≤ kᵢ ≤ 10000`). Aldan is to process quickly queries like "What is the sum of intensities read from the sensors with numbers from `i` to `j` (`i ≤ j`)? The number of queries `Q` is expected to be rather large (`0 ≤ Q ≤ 100000`).

## Input

The first input line contains integer `N`. The following `N` lines contain `kᵢ` numbers (one at a line). Then there are the integer `Q` and `Q` pairs of numbers `i`, `j` (each pair is in a separate line).

## Output

should contain `Q` lines with the sums of the corresponding intensity sensors readings.

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
1
2
3
-1
4
3
1 5
4 4
1 4
</pre>
</td>
<td style="vertical-align: top">
<pre>
9
-1
5
</pre>
</td>
</tr>
</table>
