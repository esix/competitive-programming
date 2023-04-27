# Babel [⬀](https://www.e-olymp.com/en/problems/2717)

During the construction of the Tower of Babel, as you know, God confused all languages. The result was that each person knows a lot of languages. Two people can give each other information, if there is a language which they both know. Head building conveys the team on his well-known languages. Those who received these commands, can they pass on, translating into languages known to them. Determine the number of people to reach are the team leader.

## Input
For convenience, we enumerate all the languages with numbers from 1 to 50. First given the number of people `n` (1 ≤ `n` ≤ 100), and then there are descriptions of what languages they know these people. For each person recorded first number `mᵢ` (0 ≤ `mᵢ` ≤ 50), indicating the number of languages known i-th individual, and then lists the numbers of these very languages in ascending order (number of languages is a number from 1 to 50). It is believed that the construction manager - a person with number 1.

## Output
Print the number of people to whom can "walk" to give the head of the team (including the manager).

## Input example #1
```
5
2 1 2
1 1
2 2 3
0
2 4 5
```

## Output example #1
```
3
```

## Input example #2
```
8
3 1 4 8
3 2 4 15
3 12 14 19
2 14 33
2 8 11
4 2 4 18 21
1 15
2 21 23
```

## Output example #2
```
6
```
