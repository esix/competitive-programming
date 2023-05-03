# Test Task [⬀](https://acm.timus.ru/problem.aspx?space=1&num=2002)

It was an ordinary grim October morning. The sky was covered by heavy gray clouds. It was a little rainy. The rain drops fell on the windows with quiet bangs. Ilya was sitting at the computer and gloomy looking out of the window at the bleak scenery. Suddenly, a note caught his attention from the lower right corner of the screen. It said: “You have 1 unread email message(s)”. The boy braced himself for a bit of useless spam and opened the letter. But it turned out much more interesting...

Dear Sir, You have received this message from the “Rutnok BKS” HR department!

We have received your application for a software developer and we found your CV quite interesting. We would like to suggest a simple test task to evaluate your professional skills. Your task is to implement the register system for a forum. It must support three types of operations:

- “`register username password`”: to register a new user with name “`username`” and password “`password`”. If such user already exists in the database, the system should output the error message “`fail: user already exists`”. Otherwise, it should output message “`success: new user added`”.
- “`login username password`”: to log into the system as user “`username`” with password “`password`”. If such user does not exist, the system should output “`fail: no such user`”. Otherwise, if the user enters an incorrect password, the system should output “`fail: incorrect password`”. Otherwise, if the user is already logged in the system at that moment, it should output “`fail: already logged in`”. Otherwise, it should output “`success: user logged in`”.
- “`logout username`”: to log out of the system as user “`username`”. If such user does not exist, the system should output “`fail: no such user`”. Otherwise, if the user isn’t in the system at that moment, it should output “`fail: already logged out`”. Otherwise, it should output “`success: user logged out`”.

Use this letter as a formal description of the algorithm and follow the described format of system messages. Good luck!

Ilya stopped doing anything else and started solving the test task. You can try to solve it as well!

## Input

The first line contains an integer `n` that is the number of operations (`1 ≤ n ≤ 100`). Each of the next `n` lines contains a single query in the format given above. We can assume that “`username`” and “`password`” are non-empty strings with length of up to 30 characters. All characters in these strings have codes from 33 to 126.

## Output

For each operation, print the message on a single line in the format given above. Be sure to put spaces and punctuation marks in the right places in the messages.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
6
register vasya 12345
login vasya 1234
login vasya 12345
login anakin C-3PO
logout vasya
logout vasya
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
success: new user added
fail: incorrect password
success: user logged in
fail: no such user
success: user logged out
fail: already logged out
</pre>
</td>
</tr>
</table>
