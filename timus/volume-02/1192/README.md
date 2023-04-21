# Ball in a Dream [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1192)


A little boy likes throwing balls in his dreams. He stands on the endless horizontal plane and throws a ball at an angle of `a` degrees to the plane. The starting speed of the ball is `V` m/s. The ball flies some distance, falls down, then jumps off, flies again, falls again, and so on.

As far as everything may happen in a dream, the laws of the ball's motion differ from the usual laws of physics:
- the ball moves in the gravity field with acceleration of gravity equal to `10 m/s²`;
- the rebound angle equals the angle of fall;
- after every fall, the kinetic energy of the ball decreases by a factor of `K`;
- there is no air in the dream;
- "`Pi`" equals to `3.1415926535`.

Your task is to determine the maximal distance from the point of throwing that the ball can fly.

## Input

The input contains three numbers: `0 ≤ V ≤ 500000`, `0 ≤ a ≤ 90`, and `K > 1` separated by spaces. The numbers `V` and `a` are integers; the number `K` is real.

## Output

The output should contain the required distance in meters rounded to two fractional digits.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
5 15 2.50
</pre>
</td>
<td style="vertical-align: top">
<pre>
2.08
</pre>
</td>
</tr>
</table>
