# [Magic of David Copperfield II](http://acm.sgu.ru/problem.php?contest=0&problem=109)

_time limit per test: 0.25 sec._

_memory limit per test: 4096 KB_

The well-known magician David Copperfield loves lo show the following trick: a square with N rows and N columns of different pictures appears on a TV screen, Let us number all the pictures in the following order:

| 1         | 2         | ... | N   |
|:---------:|:---------:|:---:|:---:|
|    ...    |    ...    | ... | ... |
| N*(N-1)+1 | N*(N-1)+2 | ... | N*N |

Each member of the audience is asked to put a finger on the upper left picture (i.e., picture number one) and The Magic begins: the magician tells the audience to move the finger K₁ times through the pictures (each move is a shift of the finger to the adjacent picture up, down, left or right provided that there is a picture to move to), then with a slight movement of his hand he removes some of the pictures with an exclamation "You are not there!", and ... it is true - your finger is not pointing to any of the pictures removed. Then again, he tells the audience to make K₂ moves, and so on. At the end he removes all the pictures but one and smiling triumphantly declares, "I've caught you" (applause). 

Just now, David is trying to repeat this trick. Unfortunately, he had-a hard day before, and you know how hard to conjure with a headache. You have to write a program that will help David to make his trick.

## Input

The input file contains a single integer number N (1<N<101).

## Output

Your program should write the following lines with numbers to the output file:
```
K₁ X₁,₁ X₁,₂ ... X₁,ₘ₁
K₂ X₂,₁ X₂,₂ ... X₂,ₘ₂
...
Kₑ Xₑ,₁ Xₑ,2 ... Xₑ,ₘₑ
```

where Kᵢ is a number of moves the audience should make on the i-th turn (N<=Kᵢ<300). All Kᵢ, should be different (i.e. Kᵢ<>Kⱼ when i<>j). Xᵢ,₁ Xᵢ,₂ ... Xᵢ,ₘᵢ are the numbers of the pictures David should remove after the audience will make Kᵢ moves (the number of the pictures removed is arbitrary, but each picture should be listed only once, and at least one picture should be removed on each turn).
A description of the every next turn should begin with a new line. All numbers on each line should be separated by one or more spaces. After e iterations, all pictures except one should be removed.

## Sample Input
```
3
```

## Sample Output
```
3 1 3 7 9
5 2 4 6 8
```
