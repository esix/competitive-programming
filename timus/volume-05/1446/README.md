# Sorting Hat [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1446)

At the start of each school year, a very important event happens at Hogwarts. Each of the first-year wizards and witches is assigned to one of the four Hogwarts houses. The bravest children are put to Gryffindor, the cleverest are put to Ravenclaw, the most hard-working go to Hufflepuff, and Slytherin becomes home to the most ambitious. The assignment is carried out in the Great Hall of Hogwarts castle in the following way: when the name of a first-year student is called, he or she comes out to the center of the Hall and puts on the famous Sorting Hat. The Hat estimates the situation in the head of the young wizard or witch and cries out the name of the house to which the student is assigned. A special elf writes down the Hat's decisions. After the sorting, the elf must quickly compile lists of students of each house. Members of the Society for the Promotion of Elfish Welfare beg you to help the elf in this hard work.

## Input

The first line contains the number of first-year students `N` (`1 ≤ N ≤ 1000`). In the next `2N` lines there are their names followed by houses in which the Sorting Hat placed them. A student's name may contain lowercase and uppercase English letters, spaces and hyphens. Each name contains not more than 200 symbols.

## Output

Output lists of students of each house in the following format. In the first line there is the name of the house, then a colon, and in the next lines there is the list of students, one in a line. The lists must be given in the following order: Slytherin, Hufflepuff, Gryffindor, Ravenclaw. There must be empty lines between the lists. In each list, names must be given in the order in which they were called out during the sorting. It is guaranteed that each list will contain at least one student.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
7
Ivan Ivanov
Gryffindor
Mac Go Nagolo
Hufflepuff
Zlobeus Zlei
Slytherin
Um Bridge
Slytherin
Tatiana Henrihovna Grotter
Ravenclaw
Garry Potnyj
Gryffindor
Herr Mionag-Ranger
Gryffindor
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
Slytherin:
Zlobeus Zlei
Um Bridge

Hufflepuff:
Mac Go Nagolo

Gryffindor:
Ivan Ivanov
Garry Potnyj
Herr Mionag-Ranger

Ravenclaw:
Tatiana Henrihovna Grotter
</pre>
</td>
</tr>
</table>
