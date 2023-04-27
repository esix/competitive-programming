# Egg Drop [⬀](https://www.e-olymp.com/en/problems/8194)

There is a classic riddle where you are given two eggs and a k-floor building and you want to know the highest floor from which you can drop the egg and not have it break.

It turns out that you have stumbled upon some logs detailing someone trying this experiment! The logs contain a series of floor numbers as well as the results of dropping the egg on those floors. You need to compute two quantities - the lowest floor that you can drop the egg from where the egg could break, and the highest floor that you can drop the egg from where the egg might not break.

You know that the egg will not break if dropped from floor 1, and will break if dropped from floor k. You also know that the results of the experiment are consistent, so if an egg did not break from floor x, it will not break on any lower floors, and if an egg did break from floor y, it will break on all higher floors.

## Input

The first line contains two space-separated integers n and k (1 ≤ n ≤ 100, 3 ≤ k ≤ 100), the number of egg drops and the number of floors of the building, respectively. Each of the following n lines contains a floor number and the result of the egg drop, separated by a single space. The floor number will be between 1 and k, and the result will be either SAFE or BROKEN.

## Output

Print on a single line two integers separated by a single space. The first integer should be the number of the lowest floor from which you can drop the egg and it could break and still be consistent with the results. The second integer should be the number of the highest floor from which you can drop the egg and it might not break.

_Time limit 1 second_

_Memory limit 128 MiB_

## Input example #1
```
2 10
4 SAFE
7 BROKEN
```

## Output example #1
``
5 6
``

## Input example #2
```
3 5
2 SAFE
4 SAFE
3 SAFE
```

## Output example #2
```
5 4
```
