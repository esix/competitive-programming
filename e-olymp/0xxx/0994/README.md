# Coloured rain [⬀](https://www.e-olymp.com/en/problems/994)

At Banana Republic there is a lot of hills, connected by bridges. At a chemical plant accident occurred, resulting in evaporated experimental fertilizer "summons". The next day fell colored rain, and it was just over the hills. In some places red drops fell, in some blue, and the rest drops are green, and the hills were colored. President of Banana Republic is pleased, but he wants to paint the bridges between the tops of hills so that the bridges will be painted in the colors of the hills it connects. Unfortunately, if the bridge connects the hills of different colors, then painting will not succeed. Find the number of such "bad" bridges.

## Input

The first line contains the number of hills n (0 < n ≤ 100). Then given an adjacency matrix describing the presence of bridges between the hills (1-bridge exists, 0-no bridge). The last line contains n numbers giving the color of the hills: 1 - red, 2 - blue, 3 - green.

## Output

Print the number of "bad" bridges.

_Time limit 1 second_

_Memory limit 122.17 MiB_

## Input example #1
```
7
0 1 0 0 0 1 1 
1 0 1 0 0 0 0 
0 1 0 0 1 1 0 
0 0 0 0 0 0 0 
0 0 1 0 0 1 0 
1 0 1 0 1 0 0 
1 0 0 0 0 0 0 

1 1 1 1 1 3 3
```

## Output example #1
```
4
```
