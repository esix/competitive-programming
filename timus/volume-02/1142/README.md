# RSA Attack [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1141)

The RSA problem is the following: given a positive integer `n` that is a product of two distinct odd primes `p` and `q`, a positive integer `e` such that `gcd(e, (p-1)*(q-1)) = 1`, and an integer `c`, find an integer `m` such that `mᵉ = c (mod n)`.

## Input

One number `K` (`K <= 2000`) in the first line is an amount of tests. Each next line represents separate test, which contains three positive integer numbers – `e`, `n` and `c` 
- `e, n, c <= 32000`
- `n = p*q`
- `p`, `q` – distinct odd primes
- `gcd(e, (p-1)*(q-1)) = 1`
- `e < (p-1)*(q-1)`

## Output

For each input test the program must find the encrypted integer `m`.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
3
9 187 129
11 221 56
7 391 204
</pre>
</td>
<td style="vertical-align: top">
<pre>
7
23
17
</pre>
</td>
</tr>
</table>
