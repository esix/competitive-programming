# [Пересечение множеств](http://acm.mipt.ru/judge/problems.pl?problem=002&lang=en)

_Time limit = 5 секунд(ы)_

_Memory limit = 33000 Kb_

Your task is to find the intersection of two sets of positive integers.

**Input** The input consists of two sets of positive integers *A={a1, a2, ..., aₙ}* and *B={b1, b2, ..., bₖ}* represented as two whitespace-separated lists of numbers. Each list ends with -1, that serves as an end-of-set marker. Repetitions of elements are possible in the input, but not in the output. You may assume that 0 < aᵢ, bᵢ < 10⁶ and that the sets A and B are of size less than 1000.

**Выход** is list of numbers or word "empty" if intersection is empty.


| Input#1        | Output#1 |
|----------------|----------|
| 6 7 8 1 2 3 -1 | 1 2 3    |
| 4 3 2 1 1 -1   |          |


| Input#2        | Output#2 |
|----------------|----------|
| 1 2 3 -1       | empty    |
| 4 4 5 5 6 6 -1 |          |

