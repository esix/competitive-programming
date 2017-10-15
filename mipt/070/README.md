# [Square root of permutation](http://acm.mipt.ru/judge/problems.pl?problem=070&lang=en)

_Time limit = 5 second(s)_

Permutation of numbers 1,2 ... N is given. Please found out any permutation X that gives A if applied twice:

*X &ast; X = A*


**Input**  In the first line N is given, 0 < N < 10001. In the second line permutation A is given. Permutation "4 1 2 3" means the number 4 from 4th place goes to the first, 1 goes to the second place, 2 goes to the third place, 3 goes to the fourth place.


**Output.** If there is no proper X then output 0. Otherwise output N numbers describing permutaion X (one of the possible).


| Input#1  | Output#1 |
|----------|----------|
| 4        | 0        |
| 2 3 4 1  |          |


| Input#2  | Output#2 |
|----------|----------|
| 4        | 2 3 4 1  |
| 3 4 1 2  |          |

