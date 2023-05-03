# Taxi for Programmers [⬀](https://acm.timus.ru/problem.aspx?space=1&num=2005)

The clock shows 11:30 PM. The sports programmers of the institute of maths and computer science have just finished their training. The exhausted students gloomily leave their computers. But there’s something that cheers them up: Misha, the kind coach is ready to give all of them a lift home in his brand new car. Fortunately, there are no traffic jams on the road. Unfortunately, all students live in different districts. As Misha is a programmer, he highlighted and indexed five key points on the map of Yekaterinburg: the practice room (`1`), Kirill’s home (`2`), Ilya’s home (`3`), Pasha’s and Oleg’s home (`4`; they live close to each other) and his own home (`5`). Now he has to find the optimal path. The path should start at point `1`, end at point `5` and have minimum length. Moreover, Ilya doesn’t want to be the last student to get home, so point `3` can’t be fourth in the path.

Input

The input contains a table of distances between the key points. It has five rows and five columns. The number in the `i`’th row and the `j`’th column (`1 ≤ i, j ≤ 5`) is a distance between points `i` and `j`. All distances are non-negative integers not exceeding `10 000`. It is guaranteed that the distance from any point to itself equals `0`, and for any two points, the distance between them is the same in both directions. It is also guaranteed that the distance between any two points doesn’t exceed the total distance between them through another point.

## Output

Output two lines. The first line should contain the length of the optimal path. The second line should contain five space-separated integers that are the numbers of the points in the order Misha should visit them. If the problem has several optimal solutions, you may output any of them.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
0 2600 3800 2600 2500
2600 0 5300 3900 4400
3800 5300 0 1900 4500
2600 3900 1900 0 3700
2500 4400 4500 3700 0
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
13500
1 2 3 4 5
</pre>
</td>
</tr>
</table>
