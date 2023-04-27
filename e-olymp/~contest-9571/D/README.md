# Business Card Juggling [⬀](https://www.e-olymp.com/en/contests/9571/problems/83970)
Lord Bradley has n friends. Each of them has their own name, titles and history but, to be frank, Bradley has never cared to remember all this information. He simply numbers his friends 1, 2, ..., n. For every friend, Bradley keeps his business card: all n cards (in some random order) form a stack, which is always in his wallet. Whenever a friend comes to visit him, and his proper titles must be quickly recalled, Lord Bradley takes out his stack and moves cards (one by one) from the top to the bottom, until the visitor's card is the front one. Then the stack is put back into Bradley's wallet.

Lord Bradley is a distinguished traveler and explorer, but he doesn't like unnecessary work. Given a sequence of his friends' visits, determine for every visit how many cards he has to shuffle to find the correct one.

## Input
The first line of standard input contains the number of test cases t. The test cases follow.

The first line of each test case contains two integers n and m (1 ≤ n ≤ 10⁶, 1 ≤ m ≤ 10⁶), denoting respectively the number of Bradley's friends and the number of visits. The second line contains the starting order of the cards in Bradley's stack, from the top to the bottom - a permutation of {1, 2, ..., n}. The third, final line contains m space-separated numbers from the set {1, 2, ..., n} numbers of visiting friends in the order of arrival.

## Output
For each test case, your program should write a single line containing m integers - for every visit, output the number of cards that Bradley had to move before that visit.

## Input example
```
2
4 8
1 2 3 4
1 2 3 4 1 2 3 4
4 2
4 3 2 1
1 3
```

## Output example
```
0 1 1 1 1 1 1 1
3 2
```
