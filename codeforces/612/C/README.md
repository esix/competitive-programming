# Replace To Make Regular Bracket Sequence [⬀](https://codeforces.com/contest/612/problem/C)

You are given string `s` consists of opening and closing brackets of four kinds `<>`, `{}`, `[]`, `()`. There are two types of brackets: opening and closing. You can replace any bracket by another of the same type. For example, you can replace `<` by the bracket `{`, but you can't replace it by `)` or `>`.

The following definition of a regular bracket sequence is well-known, so you can be familiar with it.

Let's define a regular bracket sequence (RBS). Empty string is RBS. Let `s₁` and `s₂` be a RBS then the strings `<s₁>s₂`, `{s₁}s₂`, `[s₁]s₂`, `(s₁)s₂` are also RBS.

For example the string "`[[(){}]<>]`" is RBS, but the strings "`[)()`" and "`][()()`" are not.

Determine the least number of replaces to make the string `s` RBS.

## Input

The only line contains a non empty string `s`, consisting of only opening and closing brackets of four kinds. The length of `s` does not exceed `10⁶`.

## Output

If it's impossible to get RBS from `s` print Impossible.

Otherwise print the least number of replaces needed to get RBS from `s`.

## Examples

### input
```
[<}){}
```

### output
```
2
```

### input
```
{()}[]
```

### output
```
0
```

### input
```
]]
```

### output
```
Impossible
```
