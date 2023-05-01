# Taxi [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1607)

Petr likes going by taxi. For him, it is not only the pleasure of a fast and comfortable ride, but also the opportunity to bargain with the driver over the fare. The bargaining between Petr and taxi drivers always follows the same scheme:

- To the airport! I pay 150 roubles.
- No, I won't take you for 150. Let's go for 1000.
— Are you crazy? I haven't got that much on me! Ok, let it be 200.
- Are you laughing? I agree to 900.
- Well, I'll give 250.
- Guy, do you know how much gas is? Pay 800 and off we go!
- …

Such a dialog continues until they agree on the fare. Petr always increases his amount by the same number, and the taxi driver decreases it in the same way. The driver would not ask a sum that is less than that offered by Petr. In this case, he will agree with Petr's offer. Petr will act similarly.

## Input

The single input line contains four integer numbers: the initial Petr's offer `a`, Petr's raise to his offer `b`, the initial fare required by the driver `c`, and the driver's reduction of his fare `d`; `1 ≤ a, b, c, d ≤ 10000`.

## Output

Output the amount of money that Petr will pay for the ride.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
150 50 1000 100
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
450
</pre>
</td>
</tr>
</table>
