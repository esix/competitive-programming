# A380 [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1893)

There was no limit to Jack's joy! He managed to buy on the Internet tickets to the ICPC semifinal contest, which was to be held very soon in the mysterious overseas city of Saint Petersburg. Now he was going to have a transoceanic flight in the world largest passenger aircraft Airbus A380.

Jack started studying the aircraft seating chart in Wikipedia, so that he would be able to ask for a nice window seat at check-in. Or maybe he would ask for an aisle seat—he hadn't decided yet.

Airbus A380 has two decks with passenger seats. The upper deck is for premium and business class passengers. The premium class section embraces the first and second rows. Each row contains four seats identified by letters from `A` to `D`. The aisles in this section are between the first and second seats and between the third and fourth seats of each row. The rows from the third to the twentieth are for business class passengers. There are six seats in each row, and they are identified by letters from `A` to `F`. The aisles are between the second and third and between the fourth and fifth seats of each row.

The lower deck is reserved for economy class passengers. The rows are numbered from `21` to `65`. Each row contains ten seats identified by letters from `A` to `K` (the letter `I` is omitted). The aisles are between the third and fourth seats and between the seventh and eighth seats of each row.

Help Jack determine if a seat is next to the window or next to the aisle given the seat designation.

## Input

The only line contains a seat designation: the row number and the letter identifying the position of the seat in the row.

## Output

If the seat is next to the window, output “`window`”. Otherwise, if the seat is next to the aisle, output “`aisle`”. If neither is true, output “`neither`”.

## Samples

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
3C
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
aisle
</pre>
</td>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
64A
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
window
</pre>
</td>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
21F
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
neither
</pre>
</td>
</tr>
</table>
