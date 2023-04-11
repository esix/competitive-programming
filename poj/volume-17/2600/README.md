# [Geometrical dreams](http://poj.org/problem?id=2600)

## Description

There is a polygon `A₁A₂...An` (the vertices `Aᵢ` are numbered in the clockwise order). On each side `AᵢAᵢ₊₁` an isosceles triangle `AᵢMᵢAᵢ₊₁` is built on the outer side of the polygon, and angle `AᵢMᵢAᵢ₊₁ = αᵢ`. Here `Aₙ₊₁ = A₁`.

The set of angles ai satisfies a condition that the sum of angles in any of its nonempty subsets is not aliquot to 360 degrees.

You are given `n <= 50`, co-ordinates of vertices `Mᵢ` and angles `αᵢ` (measured in degrees). Write a program which restores co-ordinates of the polygon vertices.

## Input

The first line of an input contains an integer `n`. The next `n` lines contain pairs of real numbers which are co-ordinates of points `Mᵢ`. And the last `n` lines of the file consist of degree values of angles `αᵢ`.

## Output

The output file should contain `n` lines of pairs of coordinates of the points

### Sample Input
```
3
0 2
3 3
2 0
90
90
90
```

### Sample Output
```
1 1
1 3
3 1
```

## Source

Ural State University collegiate programming contest 2000
