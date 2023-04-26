# Sabotage [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1290)

It is the seventh year of the terrible harmful Galaxy War... Leo Hao is one of the first defenders of his planet. He is lucky! He has gone through many troubles. For example, he stayed alive after the close combat with a meklon warrior – a perfect killing machine. He lost his left leg, right eye and spent five long months in hospital. After that incident, he had to leave the army and return to the Earth.

But Leo is lucky twice! He was able to find a good job after all these terrible incidents. Now he is a leading programmer in “U.S. Robots”. He was involved into the creation of software for zero level defense system. However, even there he was faced with interplanetary intervention! Just a few days ago it was found out that one of his co-workers is not a human! No! Physically he was a human of course, but parasitical Darloxian – agent of the most odious race in the Galaxy, captured his mind.

Obviously, mind corrupted by Darlok agent was not able to write high-quality code. That why Leo is now reviewing his code. It’s terrible!!! It is not effective, slow, dirty and tangled. It must be rewritten!

However, Leo faced trouble during the exploration of the following function: input is the array of positive integer numbers. First, function prints quantity of numbers in the array onto a sheet of paper. Then quantity of numbers in the array greater than 1 is printed. Then quantity of numbers greater than 2 and so on, until the function encounters zero (zero is never printed out). After that, special mechanical manipulator puts this sheet of paper into scanner, which reads this set of numbers into memory and the described operation repeats again. After that the new paper with numbers comes out from the printer. The scanner reads these new numbers, and stores them into the array. This array is the result of the function.

### Example. 

Input: `4 1 6`.

After first stage printer prints `3 2 2 2 1 1`

After second stage the result of the function will be `6 4 1`

Leo feels that it can be done more effectively. Your goal is to write a program, which will be able to replace the function written by Darlok agent, and will be much faster.

## Input

First line of input contains the number `N` (`0 ≤ N ≤ 25000`). The next `N` lines contain integers `pᵢ` (`1 ≤ pᵢ ≤ 25000`) one per line. It is the input for the described function.

## Output

Output should contain the result of the function, written by Darlok Agent.


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
4
1
6
</pre>
</td>
<td style="vertical-align: top">
<pre>
6
4
1
</pre>
</td>
</tr>
</table>
