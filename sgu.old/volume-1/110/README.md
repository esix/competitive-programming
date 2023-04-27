# Dungeon [⬀](http://acm.sgu.ru/problem.php?contest=0&problem=110)

_time limit per test: 0.25 sec._

_memory limit per test: 4096 KB_

The mission of space explorers found on planet M the vast dungeon. One of the dungeon halls is fill with the bright spheres. The explorers find out that the light rays reflect from the surface of the spheres according the ordinary law (the incidence angle is equal to the reflectance angle, the incidence ray, the reflected ray and the perpendicular to the sphere surface lay in the one plane). The ancient legend says that if the light ray will reflect from the spheres in the proper order, than the door to the room with very precious ancient knowledge will open. You are not to guess the right sequence; your task is much simpler. You are given the positions and the radii of the spheres, the place where the laser shot was made and the direction of light propagation. And you must find out the sequence in which the light will be reflected from the spheres.

## Input

The first line of input contains the single integer n (1≤n≤50) - the amount of the spheres. The next n lines contain the coordinates and the radii of the spheres xi, yi, zi, ri (the integer numbers less or equal to 10000 by absolute value). The last line contains 6 real numbers - the coordinates of two points. The first one gives the coordinates of the place of laser shot, and the second gives the direction in which it was made (the second point is the point on the ray). The starting point of the ray lies strictly outside of any sphere.

## Output

Your program must output the sequence of sphere numbers (spheres are numbers from 1 as they was given in input), from which the light ray was reflected. If the ray will reflect more the 10 times, than you must output first 10, then a space and the word 'etc.' (without quotes). Notice: if the light ray goes at a tangent to the sphere you must assume that the ray was reflected by the sphere.

## Sample Input 1
```
1 
0 0 2 1 
0 0 0 0 0 1
```

## Sample Output 1
```
1
```

## Sample Input 2
```
2 
0 0 2 1 
0 0 -2 1 
0 0 0 0 0 100
```

## Sample Output 2
```
1 2 1 2 1 2 1 2 1 2 etc.
```