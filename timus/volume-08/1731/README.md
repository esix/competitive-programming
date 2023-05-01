# Dill [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1731)

Ivan Vasil'evich likes to work in his garden. Once he heard that dill was a very beautiful and healthy crop and planted his whole garden with two varieties of it.

When the dill was ripe, Ivan Vasil'evich harvested it and put it into boxes. He filled n boxes with dill of the first variety and m boxes with dill of the second variety. The weight of each box with dill in kilograms was an integer and all the weights were different. In order to please his neighbors Ivan Ivanovich and Ivan Nikiforovich, Ivan Vasil'evich decided to give each of them two boxes with dill, one box of each variety. Ivan Vasil'evich didn't want Ivan Ivanovich and Ivan Nikiforovich to quarrel, so he decided that the total weight of the boxes given to each of the neighbors should be equal. Ivan Vasil'evich considered all the possible variants and saw that this was impossible. Find the weights of all the boxes with dill stocked by Ivan Vasil'evich.

Input

The only input line contains space-separated integers `n` and `m` (`2 ≤ n, m ≤ 50`).

## Output

In the first line output `n` space-separated integers. These must be the weights of the boxes with the first variety of dill. In the second line output `m` space-separated integers, which are the weights of the boxes with the second variety of dill. The integers must be positive, different, and should not exceed `10⁹`. If there are several solutions, output any of them. If there is no solution, output the line “`It is a lie!`”.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
2 3
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
1 2
5 10 12
</pre>
</td>
</tr>
</table>
