# Some Words about Sport [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1313)


Ural doctors worry about the health of their youth very much. Special investigations showed that a lot of clever students instead of playing football, skating or bicycling had participated in something like Programming Olympiads. Moreover, they call it sports programming! To sit near the monitor and think during 5 hours a day – is it a sport? To do it two times per year during the contests – it is more or less normal, but during the preparations to the nearest contest they spend several hours a week sitting at their computers! It would be possible to understand if they were some blockheads and dunces, but they are ones of the best students all over the world!

To save students from the harmful habit to sit at the computer for hours, Ural doctors has invented a fundamentally new monitor with diagonal trace of a beam in its electron-beam tube. Soon the winners of Ural Programming Championship would be awarded with such monitors. In the specially designed square monitor the electronic beam would scan the screen not horizontally but diagonally. The difference of the lengths of different diagonals causes such effects as non-uniform brightness, flashing and non-linear distortions. The terrible properties of such monitors would break of the habit of looking at the monitor for hours. There is a little problem: the majority of computer video cards generates the normal “rectangle” signal for monitor. So it is necessary to develop special adapter-program, which should transform the usual “rectangle” signal to the signal necessary for this kind of monitors. Program should be fast and reliable. That’s why the development of this program is entrusted to the participants of the Ural Championship for Sports Programming.

## Input

The first input line contains the single integer `N` (`1 ≤ N ≤ 100`) – the number of pixels on the side of new square monitor. It is followed by `N` lines, each containing `N` positive integers not exceeding 100 divided by spaces. It is the image outputting by the usual video card (as you can see the color depth of new monitor is not so large – anyway usual programmer does not need more than 100 colors).

## Output

You are to write the program that outputs the sequence for input into the new monitor. Pixels are numbered from the upper-left corner of the screen diagonally from left ot right and bottom-up. There is no need to explain details – look at the sample and you'll understand everything.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
4
1 3 6 10
2 5 9 13
4 8 12 15
7 11 14 16
</pre>
</td>
<td style="vertical-align: top">
<pre>
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16
</pre>
</td>
</tr>
</table>
