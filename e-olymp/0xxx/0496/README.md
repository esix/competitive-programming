# Permutation [⬀](https://www.e-olymp.com/en/problems/496)

If you read Harry Potter, you know that the lord of evil Lord Voldemort created his name by reversing the letters in his real name. Because of the name "Tom Marvolo Riddle" he received "I am Lord Voldemort".

Write a program that checks whether you can get from one another by reversing the name of his letters.

## Input
The first line contains the number n of tests. The next n lines each contain two words separated by spaces.

## Output
For each test in the output file prints the word "Yes", if possible from one name to get more, and "No" otherwise.

## Comments

- 1) permutation changes the order of letters in a word, but no new characters can not be added and no original letters can not be removed. For example, you can convert "aabc" to "abca", but not to the "bac", "abc", "aabca", "aacbb".
- 2) The words contain only the characters of the English alphabet ('a' – 'z', 'A'-'Z').
- 3) The phrase does not contain spaces.
- 4) You can not insensitive when comparing words, 'a' equal to 'A', 'b' equal to 'B' and so on.

## Limits
The length of any word is greater than 0 and not exceed 50 characters.

## Input example
```
3
TomMarvoloRiddle IamLordVoldemort
stop pots
abbc bac
```

## Output example
```
Yes
Yes
No
```
