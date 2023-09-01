# Number Line Jumps [⬀](https://www.hackerrank.com/challenges/kangaroo)

You are choreographing a circus show with various animals. For one act, you are given two kangaroos on a number line ready to jump in the positive direction (i.e, toward positive infinity).

- The first kangaroo starts at location `x₁` and moves at a rate of `v₁` meters per jump.
- The second kangaroo starts at location `x₂` and moves at a rate of `v₂` meters per jump.

You have to figure out a way to get both kangaroos at the same location at the same time as part of the show. If it is possible, return `YES`, otherwise return `NO`.

## Example
```
x₁ = 2
v₁ = 1
x₂ = 1
v₂ = 2
```

After one jump, they are both at `x = 3`, (`x₁ + v₁ = 2 + 1`, `x₂ + v₂ = 1 + 2`), so the answer is `YES`.

## Function Description

Complete the function kangaroo in the editor below.

kangaroo has the following parameter(s):
- `int x1, int v1`: starting position and jump distance for kangaroo 1
- `int x2, int v2`: starting position and jump distance for kangaroo 2

## Returns
- `string`: either `YES` or `NO`

## Input Format

A single line of four space-separated integers denoting the respective values of `x₁`, `v₁`, `x₂`, and `v₂`.

## Constraints
- `0 ≤ x₁ < x₂ ≤ 10000`
- `1 ≤ v₁ ≤ 10000`
- `1 ≤ v₂ ≤ 10000`

## Sample Input 0
```
0 3 4 2
```

## Sample Output 0
```
YES
```

## Explanation 0

The two kangaroos jump through the following sequence of locations:

![](1516005283-e74e76ff0c-kangaroo.png)

From the image, it is clear that the kangaroos meet at the same location (number **12** on the number line) after same number of jumps (**4** jumps), and we print `YES`.

## Sample Input 1
```
0 2 5 3
```

## Sample Output 1
```
NO
```

## Explanation 1

The second kangaroo has a starting location that is ahead (further to the right) of the first kangaroo's starting location (i.e., `x₂ > x₁`). Because the second kangaroo moves at a faster rate (meaning `v₂ > v₁`) and is already ahead of the first kangaroo, the first kangaroo will never be able to catch up. Thus, we print `NO`.
