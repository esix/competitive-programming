# Donald is a postman [⬀](https://acm.timus.ru/problem.aspx?space=1&num=2023)

![Problem illustration](2023-1.png)

Donald Duck works as a postman for the Walt Disney Studios. He delivers children’s letters from all over the world to his friends, which are cartoon characters. The Studios has three cases for the letters, with nine sections in each case. Every section has the name of the receiver on it. All cases stand in a row as it is shown at the picture below.

Donald Duck have brought n letters today. Initially, he stands near the leftmost case. He has to make one step to go to the neighboring case or to the previous one. How many steps will he make until he puts all the letters into the respective sections, if he does this in the order they are in his bag?

![Problem illustration](2023-2.png)

## Input

The first line contains an integer n that is the amount of letters in Donald’s bag (`1 ≤ n ≤ 1 000`). The following `n` lines contain receivers of the letters in the order they are in the bag.

## Output

Output the number of steps Donald should make to put all the letters into the cases.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
4
Aurora
Tiana
Ariel
Mulan
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
5
</pre>
</td>
</tr>
</table>
