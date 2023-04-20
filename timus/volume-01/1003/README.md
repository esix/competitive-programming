# Parity [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1003)


Now and then you play the following game with your friend. Your friend writes down a sequence consisting of zeroes and ones. You choose a continuous subsequence (for example the subsequence from the third to the fifth digit inclusively) and ask him, whether this subsequence contains even or odd number of ones. Your friend answers your question and you can ask him about another subsequence and so on.

Your task is to guess the entire sequence of numbers. You suspect some of your friend's answers may not be correct and you want to convict him of falsehood. Thus you have decided to write a program to help you in this matter. The program will receive a series of your questions together with the answers you have received from your friend. The aim of this program is to find the first answer which is provably wrong, i.e. that there exists a sequence satisfying answers to all the previous questions, but no such sequence satisfies this answer.

## Input

Input contains a series of tests. The first line of each test contains one number, which is the length of the sequence of zeroes and ones. This length is less or equal to 10⁹. In the second line, there is one non-negative integer which is the number of questions asked and answers to them. The number of questions and answers is less or equal to 5 000. The remaining lines specify questions and answers. Each line contains one question and the answer to this question: two integers (the position of the first and last digit in the chosen subsequence) and one word which is either “`even`” or “`odd`” (the answer, i.e. the parity of the number of ones in the chosen subsequence, where “even” means an even number of ones and “`odd`” means an odd number). The input is ended with a line containing −1.

## Output

Each line of output containing one integer `X`. Number `X` says that there exists a sequence of zeroes and ones satisfying first `X` parity conditions, but there exists none satisfying `X + 1` conditions. If there exists a sequence of zeroes and ones satisfying all the given conditions, then number `X` should be the number of all the questions asked.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
10
5
1 2 even
3 4 odd
5 6 even
1 6 even
7 10 odd
-1
</pre>
</td>
<td style="vertical-align: top">
<pre>
3
</pre>
</td>
</tr>
</table>
