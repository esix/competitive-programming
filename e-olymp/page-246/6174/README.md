# [A+B](https://www.e-olymp.com/en/problems/6174)

There is a computer, which has two memory cells (let us denote these cells by the letters a and b). Each cell (variable) stores some integer at any time. The computer can execute only two instructions a+=b and b+=a. The first instruction increases the value of the variable a by the value stored in the variable b. The second one, respectively, increases the value of b by the value a. A program for this computer consists of a sequence (possible empty) of such instructions. Theinstructions are executed in the appropriate order.

Your task is to determine whether the given value S can be obtained in some cell after executing some program.

## Input

The input file contains three integers: the initial value of the variable a, the initial value of the variable b and the required value S (0 ≤ a, b, S ≤ 10¹⁸).

## Output

Output YES if the required value can be obtained as a result of some program execution, or NO otherwise.

_Time limit 0.5 seconds_

_Memory limit 256 MiB_

## Input example
Sample 1
```
1 2 3
```

Sample 2
```
3 4 5
```

Sample 3
```
3 4 17
```

## Output example
Sample 1
```
YES
```

Sample 2
```
NO
```

Sample 3
```
YES
```