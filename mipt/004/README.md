# [Athletes](http://acm.mipt.ru/judge/problems.pl?problem=004&lang=en)

_Time limit = 3 second(s)_

Every athlete is characterized by his mass mᵢ (in kg) and strength sᵢ(in kg).

You are to find the maximum number of athletes that can form a tower standing one upon another.

An athlete can hold a tower of athlets with total mass equal to his strength or less than his strength.

Input contains the number of athletes n and their parameters:

```
n
m1 s1
m2 s2
...
mₙ sₙ
```

If mᵢ > mⱼ then sᵢ > sⱼ but athletes with equal masses can be of different strength.

Number of athletes n < 100000. Masses and strengths are positive integers less than 2000000.


| Input#1  | Output#1 |
|----------|----------|
| 4<br/>3 4<br/>2 2<br/>7 6<br/>4 5| 3 |


