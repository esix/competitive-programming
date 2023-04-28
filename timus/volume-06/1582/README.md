# Bookmakers [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1582)

Programmer Sergey visited the homeland of football this summer. On his first day in England, he discovered that there were more bookmakers near the Wembley Stadium than football fans. The bookmakers were taking bets at a wide range of payout odds. As a programmer, Sergey found it easier to operate with betting coefficients instead of odds, and he easily converted odds into these coefficients: if the odds for some outcome of a match are `m : n`, then the betting coefficient `k` is `(m + n) / n`. This means that if Sergey placed a bet of `x` pounds and guessed the outcome correctly, he is paid `k · x` pounds by the bookmaker (and gets nothing if he was wrong).

Having walked around the stadium, Sergey found out that the best coefficients for the three possible outcomes were `3.5`, `3.5`, and `3.5` (of course, they were offered by different bookmakers). Sergey placed a bet of `330` pounds on each outcome and was not a bit upset about losing two of the three bets because the third bet brought him `1155` pounds, which was more than he had paid to the three bookmakers altogether. In order to cover his travel expenses, Sergey decided to place bets every day distributing them in such a way that he would win as much as possible in the worst case. Write a program that will help Sergey to place bets optimally.

You are given the best coefficients `k₁`, `k₂`, and `k₃` for the three possible outcomes of a match. Find the maximal sum of money that Sergey will receive in the worst case if the total amount of the bets he places is `1000` pounds.

## Input

The single line of the input contains the numbers `k₁`, `k₂`, and `k₃` separated by a space. The numbers are in the range from `0.01` to `100`.

## Output

In the single line of the output, give the maximal amount of money that Sergey gets back in the worst case. You may assume that bets and payouts can be fractional numbers. Round the answer to an integer according to the standard mathematical rule.

## Samples

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
3.5 3.5 3.5
</pre>
</td>
<td style="vertical-align: top">
<pre>
1167
</pre>
</td>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
1.25 10.0 5.75
</pre>
</td>
<td style="vertical-align: top">
<pre>
931
</pre>
</td>
</tr>
</table>
