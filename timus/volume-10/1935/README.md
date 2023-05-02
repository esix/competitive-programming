# Tears of Drowned [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1935)

*Tia Dalma: Come. What service may I do you? You know I demand payment.*

*Jack: I brought payment. Look. An undead monkey. Top that.*

*Tia Dalma: The payment is fair.*

Old Captain Jack Sparrow’s friend Tia Dalma, the fortuneteller and prophetess, often makes potions. She has an outstanding collection of the rarest ingredients such as rat tails, fingers of drowned, tears of virgins and so on. And all these ingredients require special care.

Recently Tia Dalma received some good skins of bats as a payment, and now she wants to dry them. To dry ingredients fortuneteller usually uses specially prepared books as the magical properties of the skins could be lost during prolonged contact with other objects. Tia Dalma knows how many sheets should be on both sides of the skin to save it unspoiled. For a i-th skin that number is ai, that is, the distance from it to the neighboring skins and the book cover can’t be less than ai sheets. Help a fortuneteller determine the minimum number of sheets that should be in the book to save rare ingredients from damage.

## Input

The first line contains integer `n`  that is the number of skins (`1 ≤ n ≤ 100`). The second line contains `n` integers `aᵢ` (`1 ≤ aᵢ ≤ 100`).

## Output

Output the minimal required number of sheets in the book.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
3
5 10 3
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
28
</pre>
</td>
</tr>
</table>

