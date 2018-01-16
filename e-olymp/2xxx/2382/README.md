# [Grafix Mask](https://www.e-olymp.com/en/problems/2382)

In one mode of the grafix software package, the user blocks off portions of a masking layer using opaque rectangles. The bitmap used as the masking layer is 400 pixels tall and 600 pixels wide. Once the rectangles have been blocked off, the user can perform painting actions through the remaining areas of the masking layer, known as holes. To be precise, each hole is a maximal collection of contiguous pixels that are not covered by any of the opaque rectangles. Two pixels are contiguous if they share an edge, and contiguity is transitive.

You are given the rectangles that have been blocked off in the masking layer. Find the area, in pixels, of every hole in the resulting masking area, sorted from smallest area to greatest.

![prb2382](1327177529.JPG)

The left picture contains two holes, the right picture contains nine holes

## Input

Consists of multiple test cases. The first line of each test case contains the number n (1 ≤ n ≤ 50) of given rectangles. Each of the next n lines gives the coordinates of opposite corners of rectangle in the form "row column row column" (0 ≤ row ≤ 399, 0 ≤ column ≤ 599). The first two integers are the coordinates of the top left pixel in the given rectangle, and the last two integers are the coordinates of its bottom right pixel.

## Output

For each test case print in a separate line the list of hole areas in increasing order. If for some test case the resulting masking area does not contain holes, print an empty line.

_Time limit 1.5 second_

_Memory limit 64 MiB_

## Input example
```
1
0 292 399 307
4
48 192 351 207
48 392 351 407
120 52 135 547
260 52 275 547

```

## Output example
```
116800 116800
22816 192608
```
