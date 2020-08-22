# [BHTML 1.0](http://acm.sgu.ru/problem.php?contest=0&problem=302)

_Time limit per test: 0.25 second(s)_

_Memory limit: 65536 kilobytes_

_input: standard_

_output: standard_


The hypertext markup language BHTML 1.0 has only two paired tags. They are &lt;UP&gt; &lt;/UP&gt; and &lt;DOWN&gt; &lt;/DOWN&gt;. The &lt;UP&gt; &lt;/UP&gt; tag capitalizes all letters inside its body (between an open tag and a close one), and &lt;vDOWN&gt; &lt;/DOWN&gt; makes all inside the body letters lowercase. You are given the text consisting of latin letters and tags. Your task is to write the text right as it will be shown in the Bernet Explorer browser window. Tags in the text are arranged correctly, i.e. they form correct bracket sequence. If a letter lays inside several tags, its case is defined by the most inner tag.

## Input
The input contains the string S with the text. The length of the string is a natural number not exceeding 1000. Tags are always written in uppercase.

## Output
Write to the output text after the processing.

## Example(s)
### sample input
```
Thi<UP>sIs<DOWN>EaSY</DOWN>Pr<UP>O</UP>ble</UP>m 
```

### sample output
```
ThiSISeasyPROBLEm 
```

Online Contester Team © 2002 - 2010. All rights reserved.