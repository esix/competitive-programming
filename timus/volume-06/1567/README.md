# SMS-spam [⬀](https://acm.timus.ru/problem.aspx?space=1&num=1567)

Petr, a student, decided to start his own business. He offers SMS advertising services to the business owners renting offices in the newly built “Prisma” tower. If an office owner wants to use the service, he devises a slogan and Petr texts it from his personal phone to thousands of Ekaterinburg citizens (he already bought the pirated list of mobile phone numbers). The cost of each slogan sent is a sum of costs of each character typed. Cost of an individual character is determined according to a very simple scheme: each tap at the phone's keyboard costs 1 rouble.

Petr's phone doesn't support sophisticated text input technologies, such as T9, and only the english alphabet can be used.

<table>
<tr>
<td>
<pre> 1 
abc</pre></td>
<td><pre> 2 
def</pre></td>
<td><pre> 3 
ghi</pre></td>
</tr><tr>
<td><pre> 4 
jkl</pre></td>
<td><pre> 5 
mno</pre></td>
<td><pre> 6 
pqr</pre></td>
</tr><tr>
<td><pre> 7 
stu</pre></td>
<td><pre> 8 
vwx</pre></td>
<td><pre> 9 
yz</pre></td>
</tr><tr>
<td><pre>  
 </pre></td>
<td><pre> 0
.,!</pre></td>
<td><pre> #
 _ </pre></td>
</tr>
</table>

The “`_`” character in the table denotes whitespace. If you want to, for example, type “`a`”, you need to press the “`1`” button once. To type “`k`”, you press “`4`” twice. To type “`!`”, press “`0`” three times.

Petr has to apply this simple algorithm to calculate the cost of every slogan he sends. However, Petr is a very busy man (and, as a matter of fact, doesn't bother to learn arithmetics, because he's a Philosophy student). You just have to help Petr, you are his best friend after all.

## Input

The single line of input contains the slogan. Slogan consists of words, spaces, commas, full stops and exclamation marks. All the words consist of lowercase english letters. Slogan can't be longer than 1000 characters.

## Output

Output a single number representing the cost of the given slogan, according to Petr's pricing.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
pokupaite gvozdi tolko v kompanii gvozdederov i tovarischi!
</pre>
</td>
<td style="vertical-align: top">
<pre>
114</pre>
</td>
</tr>
</table>
