# Palindrome [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1297)

The “U.S. Robots” HQ has just received a rather alarming anonymous letter. It states that the agent from the competing «Robots Unlimited» has infiltrated into “U.S. Robotics”. «U.S. Robots» security service would have already started an undercover operation to establish the agent’s identity, but, fortunately, the letter describes communication channel the agent uses. He will publish articles containing stolen data to the “Solaris” almanac. Obviously, he will obfuscate the data, so “Robots Unlimited” will have to use a special descrambler (“Robots Unlimited” part number NPRx8086, specifications are kept secret).

Having read the letter, the “U.S. Robots” president recalled having hired the “Robots Unlimited” ex-employee John Pupkin. President knows he can trust John, because John is still angry at being mistreated by “Robots Unlimited”. Unfortunately, he was fired just before his team has finished work on the NPRx8086 design.

So, the president has assigned the task of agent’s message interception to John. At first, John felt rather embarrassed, because revealing the hidden message isn’t any easier than finding a needle in a haystack. However, after he struggled the problem for a while, he remembered that the design of NPRx8086 was still incomplete. “Robots Unlimited” fired John when he was working on a specific module, the text direction detector. Nobody else could finish that module, so the descrambler will choose the text scanning direction at random. To ensure the correct descrambling of the message by NPRx8086, agent must encode the information in such a way that the resulting secret message reads the same both forwards and backwards.

In addition, it is reasonable to assume that the agent will be sending a very long message, so John has simply to find the longest message satisfying the mentioned property.
Your task is to help John Pupkin by writing a program to find the secret message in the text of a given article. As NPRx8086 ignores white spaces and punctuation marks, John will remove them from the text before feeding it into the program.

## Input

The input consists of a single line, which contains a string of Latin alphabet letters (no other characters will appear in the string). String length will not exceed 1000 characters.

## Output

The longest substring with mentioned property. If there are several such strings you should output the first of them.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre>
Kazak
</pre>
</td>
<td style="vertical-align: top">
<pre>
aza
</pre>
</td>
</tr>
</table>
