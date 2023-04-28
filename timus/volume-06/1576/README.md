# Telephone Tariffs [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1576)

As you know, there are three telephone tariffs in Yekaterinburg now: basic, combined and unlimited. Every subscriber is free to choose the tariff that is most suitable for him. Talkative people would select the unlimited tariff as they would have to pay only a monthly fee of `N₃` rubles. The basic tariff might be the best option for people who are not that talkative; they would pay a very low monthly fee of `N₁` rubles and the additional price of `C₁` rubles for each minute of conversation. The combined tariff (as the name suggests) combines the advantages of the above tariffs. It works like this: you pay a monthly fee of `N₂` rubles and you are allowed to talk up to T minutes per month for free. If you exceed this limit, you will be charged `C₂` rubles for each extra minute.

The phone company has started to offer a new service recently. A subscriber can provide the head office with a list of phone calls he made during a month, and, for a small fee, the most appropriate tariff will be chosen for him. You are to automate this process by writing a program processing the list of calls and calculating the amount of money the subscriber would pay if he used the basic, combined or unlimited tariff. Note that the calls that last 6 seconds or less are to be ignored. The number of minutes in a call is rounded up (i.e., a call with duration of `8:10` is charged the same as a call with duration of `9:00`).

## Input

The first line contains two numbers separated by a space: `N₁`, `C₁`, defining the basic tariff. The second line contains the data for the combined tariff: `N₂`, `T`, `C₂`, and the third line contains the data defining the unlimited tariff: the integer `N₃`. The numbers `N₁`, `N₂`, `N₃`, `T`, `C₁`, and `C₂` are integers in the range from `1` to `1000`. The fourth line contains `K`, which is the number of phone calls made (`1 ≤ K ≤ 1000`). Each of the next K lines contains the duration of a single phone call in the `mm:ss` format (`0 ≤ mm, ss ≤ 59`).

## Output

Output 3 lines: the amount of money the subscriber would pay if he used the basic, combined and unlimited tariffs. The output format is shown in the sample output.

## Samples

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
135 1
220 10 1
300
5
00:05
00:10
09:59
07:00
01:01
</pre>
</td>
<td style="vertical-align: top">
<pre>
Basic:     155
Combined:  230
Unlimited: 300
</pre>
</td>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
10 2
100 1 1
1000
1
03:00
</pre>
</td>
<td style="vertical-align: top">
<pre>
Basic:     16
Combined:  102
Unlimited: 1000
</pre>
</td>
</tr>
</table>
