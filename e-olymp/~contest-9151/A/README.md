# Conscription [⬀](https://www.e-olymp.com/en/contests/9151/problems/79565)


To organize a campaign on Azeroth Orgrim Doomhammer needs one more squad. On war appeal arrived n orcs. Doomhammer immediately estimated the abilities of each orc in close combat and javelin throw. Now he must determine which of them to be appointed soldier-infantryman (grunt), and who the bounty hunter (headhunter). At the same time, in order for the troop to be combat-ready, it is necessary that the troop should have at least g grunts and at least h headhunters. After determining each orc into some type of troop, the strength of all troop can be determined as the sum of abilities of all orcs in the specialization assigned to them.

Write a program that determines the maximum possible strength of the newly created troop.

## Input

First line contains three integers n, g, h (1 ≤ n ≤ 10000, 0 ≤ g, h ≤ n). Then n lines are given, each of them contains two integers in the interval from 0 to 10000 - the ability of the corresponding orc in close combat and his ability to throw a spear.

## Output

Print the maximum strength of the battle-worthy army that can be created from conscripts. If you can not create an army that satisfies the given conditions, print the number -1.

_Time limit 1 second_

_Memory limit 128 MiB_

## Input example #1
```
4 0 0
1 2
2 1
3 4
4 3
```

## Output example #1
```
12
```

## Input example #2
```
3 1 1
5 5
6 7
6 8
```

## Output example #2
```
20
```

## Input example #3
```
2 2 2
4 5
2 3
```

## Output example #3
```
-1
```

## Input example #4
```
3 0 3
5 2
6 1
7 0
```

## Output example #4
```
3
```