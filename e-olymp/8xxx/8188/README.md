# Hilbert Sort [⬀](https://www.e-olymp.com/en/problems/8188)

In database storage, arranging data items according to a numeric key not only makes it easier to search for a particular item, but also makes better use of a CPU's cache: any segment of data that's contiguous in memory will describe items with similar keys. This is useful if, for instance, we want to access all items whose keys are in some range. Things get more complicated if the keys represent points on a 2D grid, as might happen in a GPS guidance system. If the points (x, y) are sorted primarily by x, breaking ties by y, then points that are adjacent in memory will have similar x coordinates but not necessarily similar y, potentially placing them far apart on the grid. To better preserve distances, we may sort the data along a continuous space-filling curve.

![prb8188.gif](808bca566241a8dbe6bc1b72a830aacb.gif)

We consider one such space-filling curve called the Hilbert curve. The Hilbert curve starts at the origin (0; 0) and finishes at (S; 0), in the process traversing the entire axis-aligned square with corners at (0; 0) and (S; S). It has the following recursive construction: split the square into four quadrants meeting at (S / 2; S / 2), and recursively fill each of them with a suitably rotated and scaled copy of the full Hilbert curve. First, the lower-left quadrant is filled with a curve going from (0; 0) to (0; S / 2). Second, the upper-left quadrant is filled from (0; S / 2) to (S / 2; S / 2). Third, the upper-right quadrant is filled from (S / 2; S / 2) to (S; S / 2). And finally, the lower-right quadrant is filled from (S; S / 2) to (S; 0). The Hilbert curve can alternatively be constructed as the mathematical limit of a sequence of curves, the first six of which are shown in the figure.

Given some locations of interest, you are asked to sort them according to when the Hilbert curve visits them. Note that while the curve intersects itself at infinitely many places, e.g., at (S / 2, S / 2), making S odd guarantees that all integer points are visited just once.

## Input

The first line contains two space-separated integers n and S (1 ≤ n ≤ 200000, 1 ≤ S < 10⁹, S is odd). This is followed by n lines. Line i + 1 describes the i-th location of interest by space-separated integers xi and yi (0 ≤ xi, yi ≤ S) and an identifier string consisting of at most 46 alphanumeric characters (A - Z, a - z, 0 - 9). No two locations will share the same position or the same identifier.

## Output

Print the n identifier strings, one on each line, Hilbert-sorted according to their positions.

_Time limit 2 second_

_Memory limit 128 MiB_

## Input example #1
```
14 25
5 5 Honolulu
5 10 PugetSound
5 20 Victoria
10 5 Berkeley
10 10 Portland
10 15 Seattle
10 20 Vancouver
15 5 LasVegas
15 10 Sacramento
15 15 Kelowna
15 20 PrinceGeorge
20 5 Phoenix
20 10 SaltLakeCity
20 20 Calgary
```

## Output example #1
```
Honolulu
Berkeley
Portland
PugetSound
Victoria
Vancouver
Seattle
Kelowna
PrinceGeorge
Calgary
SaltLakeCity
Sacramento
LasVegas
Phoenix
```
