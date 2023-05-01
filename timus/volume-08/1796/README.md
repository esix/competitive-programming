# Amusement Park [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1796)

On a sunny Sunday, a group of children headed by their teacher came to an amusement park. Aunt Frosya, who was a very kind and quiet person, worked at the ticket window on that day. The teacher gave her the money but didn't say how many tickets she wanted to buy. Could Aunt Frosya determine it knowing only the numbers of different notes the teacher gave? It is assumed that the teacher didn't give extra notes, which means that there would not be enough money for the tickets if any of the notes was taken away.

## Input

The first line contains six nonnegative integers separated with a space; these are the numbers of `10`, `50`, `100`, `500`, `1000`, and `5000` rouble notes the teacher gave to Aunt Frosya. In the second line you are given the price of one ticket; it is a positive integer. All the integers in the input data do not exceed `1000`.

## Output

Find the number of tickets the teacher wanted to buy. Output the number of possible answers in the first line. The variants in ascending order separated with a space must be given in the second line. It is guaranteed that there is at least one variant of the answer.

## Samples

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
0 2 0 0 0 0
10
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
5
6 7 8 9 10
</pre>
</td>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
1 2 0 0 0 0
10
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
1
11
</pre>
</td>
</tr>
</table>
