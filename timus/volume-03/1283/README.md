# Dwarf [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1283)

Venus dwarfs are rather unpleasant creatures: ugly, malicious, and mean-spirited. Maybe it’s because of hard living conditions on their planet… but the fact remains: each of them is ready to sell his own mother in order to save up his pot of gold and to preserve it to the end of his days.

The dwarfs are especially nervous about the Mercury leprechauns who are always glad to empty a dwarf’s pot and to fill it with solar dust instead of the gold. The dwarfs are weak-sighted and can’t distinguish dust from gold. That is why each dwarf once a year visits the Central Galaxy Bank (CGB), where experienced specialists authenticate the content of the pot taking a small commission for the job.

When the amount of gold in a pot becomes less than or equal to a certain level, the life of a dwarf has no sense anymore, so he clears the world of his wretched soul: with the remaining gold he buys in a zoo the largest Jupiter toad and creeps under it which results in crushing his chest.

## Input

The input contains three integers separated with spaces. The first number is the amount of gold in a dwarf’s pot at the initial moment. The second number is the amount of gold at which the dwarf’s life becomes senseless. Both values are measured in grams and don't exceed `2³¹ − 1`. The third number is the CGB commission (from `1` to `100`); this is the percentage of gold that is taken from the pot as a way of payment for the verification.

## Output

The output should contain the number of years that is left to the dwarf.

## Samples

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
19 10 50
</pre>
</td>
<td style="vertical-align: top">
<pre>
1
</pre>
</td>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
1000 1 1
</pre>
</td>
<td style="vertical-align: top">
<pre>
688
</pre>
</td>
</tr>
</table>
