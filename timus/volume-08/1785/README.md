# Lost in Localization [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1785)

The Lavin Interactive Company, which has developed the turn-based strategy Losers-V, is constantly extending its target market by localizing the game to as many languages as it can. In particular, they are interested in creating a version of the game in Anindilyakwa, which is one of the languages spoken by indigenous Australians.

However, the localization is complicated by the fact that Anindilyakwa has no numerals. How can a phrase such as “You have seven black dragons and your enemy has forty black dragons” be translated into this language? The localizers have decided to translate it as follows: “You have few black dragons and your enemy has lots of black dragons.” They have compiled a table showing the rule of replacing numbers of monsters by Anindilyakwa words.

<table>
<thead>
<tr>
<th>Number</th><th>Designation in Anindilyakwa</th>
</tr>
</thead>
<tbody>
<tr><td>from 1 to 4</td><td>few</td></tr>
<tr><td>from 5 to 9</td><td>several</td></tr>
<tr><td>from 10 to 19</td><td>pack</td></tr>
<tr><td>from 20 to 49</td><td>lots</td></tr>
<tr><td>from 50 to 99</td><td>horde</td></tr>
<tr><td>from 100 to 249</td><td>throng</td></tr>
<tr><td>from 250 to 499</td><td>swarm</td></tr>
<tr><td>from 500 to 999</td><td>zounds</td></tr>
<tr><td>from 1000</td><td>legion</td></tr>
</tr>
</tbody>
</table>

Help the localizers automatize the process. Write a program that would output the appropriate word given the number of monsters.

## Input

The only line contains the number of monsters `n` (`1 ≤ n ≤ 2000`).

## Output

Output the word corresponding to the given number of monsters in the Anindilyakwa language.

## Samples

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
7
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
several
</pre>
</td>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
40
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
lots
</pre>
</td>
</tr>
</table>
