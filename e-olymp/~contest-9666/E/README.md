# [Expression](https://www.e-olymp.com/en/contests/9666/problems/84867)
In computing, regular expressions is a powerful tool for text search and string matching. In this problem a simplified version of regular expressions is used:

An empty string "" is a regular expression, only the empty string matches it.
A single lowercase letter "c" is a regular expression, a string consisting of a single letter c matches it.
A dot "." is a regular expression, a string consisting of any single letter matches it.
Alternation: if a and b are regular expressions then "(a|b)" is a regular expression, a string s matches it only if s matches a or s matches b.
Concatenation: if a and b are regular expressions then "(ab)" is a regular expression, a string s matches it only if s = xy, x matches a and y matches b.
Kleene star: if a is regular expression then "(a*)" is a regular expression, a string s matches it only if s is empty or s = xy, x is nonempty and matches a and y matches (a*). In other words, s consists of zero or more strings, each of them matches a.
Parentheses can be omitted, in this problem Kleene star has the highest priority, concatenation has medium priority and alternation has lowest priority. Thus "abc*|de" means "(ab(c*))|(de)".

For example, string "abcabcab" matches "a(bc|a)*ab", but string "abcbab" does not.

Your task is to find the shortest string that matches the given regular expression E and contains the given substring S.

## Input
The first line contains the regular expression E. The second line contains the substring S (1 ≤ |E|,|S| ≤ 10 000).

String S consists of lowercase English letters. Expression E consists of lowercase English letters and special characters: dots ('.'), parentheses ('(' and ')'), pipes ('|'), and asterisks ('*').

## Output
Output the shortest possible string T that both matches E and contains S as substring. If there are no such strings, output "No".

The string T should contain only lowercase English letters.

## Input example #1
```
a.*b
bab
```

## Output example #1
```
abab
```

## Input example #2
```
(ab)*
bb
```

## Output example #2
```
No
```
