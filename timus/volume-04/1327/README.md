# Fuses [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1327)

*"Janus Poluektovich (I don't remember anymore whether -A or -U) used the machine only once. He brought with him a small semitransparent box, which he connected to the Aldan. In approximately ten seconds of operation with this device, all the circuit breakers blew, and Janus Poluektovich apologized, took his box, and departed."*

Sasha Privalov, a young programmer working in the SRITS (Scientific Research Institute for Thaumaturgy and Spellcraft), finds his job rather enjoyable. Indeed, he is the only programmer of such a wonderful machine as Aldan-3 - that's a refreshing shift from a dull job in Leningrad. There is just a single problem, and the problem's name is Janus Poluektovich.

On Privalov's first workday, Janus burdened Aldan with the task of four-dimensional convolution in the conjuration space. Aldan worked for a while, flashing its lights and rewinding tapes, then a fuse blew and the machine shut down. Well, replacing fuses is something even a programmer can do. But Janus is rather absent-minded, and he, being lost in thoughts about his convolution problem, forgot about the weak fuse next day. So, on a third day Janus launched his program again, blowing another fuse. The fourth day went calmly, but on a fifth day one more fuse had to be replaced. And Janus is still not going to give up…

Nevertheless, these accidents don't bother Sasha, as long as he has enough spare fuses.

Your task is to help Sasha in making the requisition for spare parts. The requsition is made for a specific period - from the `A`-th workday to the `B`-th workday inclusive. You should calculate, how many fuses Janus is going to blow with his programs in the specified period of time.

## Input

The first line contains an integer A. The second line contains an integer `B`. `1 ≤ A ≤ B ≤ 10000`.

## Output

The output should contain one number - the amount of fuses that will be blown by Janus in the interval from day `A` until day `B`.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
1
5
</pre>
</td>
<td style="vertical-align: top">
<pre>
3
</pre>
</td>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
100
200
</pre>
</td>
<td style="vertical-align: top">
<pre>
50
</pre>
</td>
</tr>
</table>