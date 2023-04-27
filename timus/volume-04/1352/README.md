# Mersenne Primes [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1352)

**Definition.** If the number `2ᴺ−1` is prime then it is called a Mersenne prime number.

For example, `2²−1` — the first Mersenne prime, `2³−1` — the second Mersenne prime, `2¹¹²¹³−1` — the 23rd, `2²¹⁶⁰⁹¹−1` — the 31ˢᵗ.

It’s a hard problem to find those numbers without a computer. So, Euler in 1772 found the 8ᵗʰ Mersenne prime — `2³¹−1` and then for 100 years no Mersenne prime was found! Just in 1876 Lucas showed that `2¹²⁷−1` is a prime number. But he didn’t find the 9ᵗʰ Mersenne prime, it was the 12ᵗʰ one (the numbers `2⁶¹−1`, `2⁸⁹−1` and `2¹⁰⁷−1` are prime but it was found out later). A new break-through happened only in 1950’s when with the help of the computing machinery Mersenne primes with the powers 521, 607, 1279, 2203 and 2281 were found. All the following Mersenne primes were found with the help of computers. One needn’t be a great mathematician to do that. In 1978 and 1979 students Noll and Nickel found the 25ᵗʰ and 26ᵗʰ numbers (21701 and 23209) on the mainframe of their University and they became famous all over the USA. But the modern supercomputers have the limits of their capability. Today the dozens of thousands people all over the world united in one metaproject GIMPS (Great Internet Mersenne Prime Search, www.mersenne.org) look for Mersenne primes. GIMPS found 8 the greatest Mersenne primes. Their powers are 1398269, 2976221, 3021377, 6972593, 13466917, 20996011, 24036583, 25964951. `2⁶⁹⁷²⁵⁹³−1` is the 38ᵗʰ Mersenne prime, and for the last 4 numbers one can’t tell what are their sequence numbers because not all the lower numbers are checked. Those four numbers are also the greatest known prime numbers.

The latest number `2²⁵⁹⁶⁴⁹⁵¹−1` was found on February 18, 2005, it contains 7816230 decimal digits. The one who will find a prime number with more than 10 millions digits will get a prize of $100000. You may gain the prize if you join the project.

You are not now to find the 43ᵗʰ Mersenne prime — the jury won’t be able to check your answer. `N` doesn’t exceed 38 in this problem. So, given an integer `N` you are to find `Nᵗʰ` Mersenne prime.

*(Information is actual for March, 2005)*

## Input

The first line contains integer `T` — an amount of tests. Each of the next `T` lines contains an integer `N`.

## Output

For each `N` you should output the power of the `Nᵗʰ` by order Mersenne prime.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
13
18
32
24
21
19
34
27
33
20
30
28
29
22
</pre>
</td>
<td style="vertical-align: top">
<pre>
3217
756839
19937
9689
4253
1257787
44497
859433
4423
132049
86243
110503
9941
</pre>
</td>
</tr>
</table>
