# Maximum Sum [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1146)

Given a 2-dimensional array of positive and negative integers, find the sub-rectangle with the largest sum. The sum of a rectangle is the sum of all the elements in that rectangle. In this problem the sub-rectangle with the largest sum is referred to as the *maximal sub-rectangle*. A sub-rectangle is any contiguous sub-array of size 1 × 1 or greater located within the whole array.

As an example, the maximal sub-rectangle of the array:

<table align="center" class="Matrix1146" style="border:0;">
 <tbody><tr>
  <td style="border:0;text-align: right;">0</td>
  <td style="border:0;text-align: right;">−2</td>
  <td style="border:0;text-align: right;">−7</td>
  <td style="border:0;text-align: right;">0</td>
 </tr>
 <tr>
  <td style="border:0; border-left: solid 1px #c0c0c0; border-top: solid 1px #c0c0c0;text-align: right;">9</td>
  <td style="border:0; border-right: solid 1px #c0c0c0; border-top: solid 1px #c0c0c0;text-align: right;">2</td>
  <td style="border:0;text-align: right;">−6</td>
  <td style="border:0;text-align: right;">2</td>
 </tr>
 <tr>
  <td style="border:0; border-left: solid 1px #c0c0c0;text-align: right;">−4</td>
  <td style="border:0; border-right: solid 1px #c0c0c0;text-align: right;">1</td>
  <td style="border:0;text-align: right;">−4</td>
  <td style="border:0;text-align: right;">1</td>
 </tr>
 <tr>
  <td style="border:0; border-left: solid 1px #c0c0c0; border-bottom: solid 1px #c0c0c0;text-align: right;">−1</td>
  <td style="border:0; border-right: solid 1px #c0c0c0; border-bottom: solid 1px #c0c0c0; text-align: right;">8</td>
  <td style="border:0; text-align: right;">0</td>
  <td style="border:0; text-align: right;">−2</td>
 </tr>
</tbody></table>

is in the lower-left-hand corner and has the sum of 15.

## Input

The input consists of an `N × N` array of integers. The input begins with a single positive integer `N` on a line by itself indicating the size of the square two dimensional array. This is followed by `N²` integers separated by white-space (newlines and spaces). These `N²` integers make up the array in row-major order (i.e., all numbers on the first row, left-to-right, then all numbers on the second row, left-to-right, etc.). `N` may be as large as 100. The numbers in the array will be in the range `[−127, 127]`.

## Output

The output is the sum of the maximal sub-rectangle.


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
0 -2 -7 0
9 2 -6 2
-4 1 -4 1
-1 8 0 -2
</pre>
</td>
<td style="vertical-align: top">
<pre>
15
</pre>
</td>
</tr>
</table>

