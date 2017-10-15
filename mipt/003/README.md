# [Contest Table](http://acm.mipt.ru/judge/problems.pl?problem=003&lang=en)

_Time limit = 5 seconds_

In a reversi contest every two participants played one game against each other, and there were no draws. You should list the participants in such order that every player won his game against the next player in the list. There may be several orderings satisfying this condition, and you should output one of them.

**Input.** First line of input contains the number of players n (0 < **n** < 200 ). Then **n** lines representing the contest table follow, consisting of characters '+', '-', and '#'. The *M*-th line of the table has length *M*, with *L*-th symbol being '+' if the *M*-th player won the game against the *L*-th and '-' otherwise; the last symbol in each line is '#'.

**Output.**  Numbers 1,2, ... N separated with space and listed in proper order.


| SAMPLE INPUT:  | 
|----------------|
| 4<br/> # <br/> +#  <br/> -+# <br/> -+-# |
| SAMPLE OUTPUT: |
| 1 3 4 2        |

