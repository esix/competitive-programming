# ONP - Transform the Expression [⬀](http://www.spoj.com/problems/ONP/)

Transform the algebraic expression with brackets into RPN form (Reverse Polish Notation). Two-argument operators: +, -, &ast;, /, ^ (priority from the lowest to the highest), brackets ( ). Operands: only letters: a,b,...,z. Assume that there is only one RPN form (no expressions like a*b*c).

## Input

```
t [the number of expressions <= 100]
expression [length <= 400]
[other expressions]
```

Text grouped in [ ] does not appear in the input file.

## Output

```
The expressions in RPN form, one per line.
```


## Example

```
Input:
3
(a+(b*c))
((a+b)*(z+x))
((a+t)*((b+(a+c))^(c+d)))

Output:
abc*+
ab+zx+*
at+bac++cd+^*
```
