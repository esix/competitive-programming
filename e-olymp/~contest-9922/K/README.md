# [Fractional Lotion](https://www.e-olymp.com/en/problems/6613)
Freddy practices various kinds of alternative medicine, such as homeopathy. This practice is based on the belief that successively diluting some substances in water or alcohol while shaking them thoroughly produces remedies for many diseases.

This year, Freddy’s vegetables appear to have caught some disease and he decided to experiment a little bit and investigate whether homeopathy works for vegetables too. As Freddy is also a big fan of mathematics, he does not strictly insist that the substances have small concentrations, but he instead requires the concentrations to be reciprocals of integers (1/n). In experiments, some of the vegetables really got much better.

Seeing Freddy’s successes, a fellow gardener also wants to try one of these potions and asks for a flask. Freddy has one flask of the potion in concentration `1/n` and does not want to give it all out. Your task is to find out in how many ways the potion can be split into two flasks and diluted so that the resulting potions both have the same volume as the original one and the resulting concentrations also are reciprocals of integers — we do not want to end up with useless fluid, do we?

## Input
Each line describes one test case. The line contains the expression "1/n" representing the original concentration. You are guaranteed that `1 ≤ n ≤ 10000`. There are no spaces on the line.

## Output
For each test case, output a single line with the total number of distinct pairs (x, y) of positive integers satisfying `1/x + 1/y = 1/n`. Pairs differing only in the order of the two numbers are not considered different.

## Input example #1
```
1/2
1/4
1/1
1/5000
```

## Output example #1
```
2
3
1
32
```
