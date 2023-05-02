# This cheeseburger you don't need [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1993)

*Yoda: May the Force be with you.*

Master Yoda is the oldest member of the Jedi Council. He conducts preparatory classes of little Younglings up to the moment they get a mentor. All Younglings adore master Yoda and they hope to grow as strong and wise as he is. Just like all little children, Younglings are absolutely hooked on new games and ideas. Now they decided to learn to speak just like master Yoda. Help the Younglings understand how Yoda would say this or that sentence.

Yoda is speaking the Galactic language using the specific word order — so-called "object-subject-verb".

Your program receives a sentence that interests the Younglings. They have already highlighted all important parts in the sentence. They use the curly {}-brackets for objects, round ()-brackets for subjects and square []-brackets for verbs.

A sentence in the input can be simple or complex. If the sentence is complex, then it consists of two simple sentences separated by a comma. Sometimes a comma is followed by a conjunction that is not in the brackets.

Each simple question has exactly one object, one subject and one verb. Your task is to simply put them in the correct order. Namely, first the object, then the subject, finally the verb. Also, please do not forget that only the first word in the whole sentence should begin with capital letter.

## Input

The single line contains a sentence that interests the Younglings. The length of the sentence does not exceed 100 characters. All the words in the sentence consist of Latin letters. The first letter of the first word is capitalized and the rest are small. The sentence may contain a comma. Each simple sentence contains all three types of brackets. Each pair of brackets surrounds one or more words. No pair of brackets can surround the other bracket. Brackets are always located on the borders of words. The words in the sentence are separated by a single space. There is no space character before a comma or a closing bracket and also after an opening bracket. The conjunction (which can be only after a comma) is the only word that is not surrounded by a pair of brackets.

## Output

Print the sentence with the word order Yoda would use. All brackets must be omitted. You should separate the words by a single space.

## Samples

<table>
<tr><th style="text-align:center">input</th></tr>
<tr><td><pre style="white-space:pre">(We) [are] {blind}, if (we) [could not see] {creation of this clone army}</pre></td></tr>
<tr><th style="text-align:center">output</th></tr>
<tr><td><pre style="white-space:pre">Blind we are, if creation of this clone army we could not see</pre></td></tr>
<tr><th style="text-align:center">input</th></tr>
<tr><td><pre style="white-space:pre">{Truly wonderful} (the mind of a child) [is]</pre></td></tr>
<tr><th style="text-align:center">output</th></tr>
<tr><td><pre style="white-space:pre">Truly wonderful the mind of a child is</pre></td></tr>
</table>

