# Easy to Hack! [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1404)

When Vito Maretti writes an important letter he encrypts it. His method is not very reliable but it’s enough to make any detective understand nothing in that letter. Sheriff doesn’t like such state of affairs. He wants to hack the cipher of Vito Maretti and he promises to forget about all of your faults if you do that for him. Detectives will tell you what this cipher looks like.

Each word is enciphered separately. Assume an example that consists only of the small Latin letters.

At first step every letter is replaced with the corresponding number: `a` with `0`, `b` with `1`, `c` with `2`, ..., `z` with `25`.Then 5 is added to the first number, the first number is added to the second one, the second number – to the third one and so on. After that if some number exceeds `25` it is replaced with the residue of division of this number by `26`. And then those numbers are replaced back with the letters.

Let’s encipher the word `secret`.

```
Step 0.   s   e   c   r   e   t
Step 1.   18  4   2   17  4   19
Step 2.   23  27  29  46  50  69
Step 3.   23  1   3   20  24  17
Step 4.   x   b   d   u   y   r
```

We’ve got the word `xbduyr`.

## Input

You are given an encrypted word of small Latin letters not longer than 100 characters.

## Output

the original word.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
xbduyr
</pre>
</td>
<td style="vertical-align: top">
<pre>
secret
</pre>
</td>
</tr>
</table>
