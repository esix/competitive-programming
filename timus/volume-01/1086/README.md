# [Cryptography](https://acm.timus.ru/problem.aspx?space=1&num=1086)


While preparing this problem set the jury has run into the following problem: it was necessary to send by e-mail the texts of the problems. As it is well known, e-mail is not reliable, messages are sent not enciphered, there is a danger that someone can intercept them. The members of the program committee wanted no participant know the texts of the problems before the start of the contest. That's why they resorted to cryptography methods in order to save the texts of the problems from an unsanctioned reading. The jury gas worked up a new way of enciphering of a text. It is not patented yet, so it's kept secret. However, we'll reveal you one secret: the new algorithm is based on the work with prime numbers. In particular, in uses a calculation of `n`-th by order prime number.

Several members of the program committee independently have worked up programs that make such calculations, but these programs produce different answers. Each one of the programmers is sure that his program works correctly. That's why the jury has reached the deadlock and can't continue working. The contest is about not to take place.

You are to help to the jury and to save the contest. We want you to write a program that calculates the `n`-th by order prime number. The main thing is that your program should work correctly.

## Input

First line contains a positive integer `k`. Then `k` positive integers follow (one in each line). The numbers don't exceed 15000.

## Output

For each number `n` you should output the `n`-th by order prime number. Each number should be in its line.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
4
3
2
5
7
</pre>
</td>
<td style="vertical-align: top">
<pre>
5
3
11
17
</pre>
</td>
</tr>
</table>
