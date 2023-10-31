# Modified Kaprekar Numbers [⬀](https://www.hackerrank.com/challenges/kaprekar-numbers)

A modified Kaprekar number is a positive whole number with a special property. If you square it, then split the number into two integers and sum those integers, you have the same value you started with.

Consider a positive whole number `n` with `d` digits. We square `n` to arrive at a number that is either `2 × d` digits long or `(2 × d) - 1` digits long. Split the string representation of the square into two parts, `l` and `r`. The right hand part, `r` must be `d` digits long. The left is the remaining substring. Convert those two substrings back to integers, add them and see if you get `n`.

## Example
```
n = 5
d = 1
```

First calculate that `n² = 25`. Split that into two strings and convert them back to integers `2` and `5`. Test `2 + 5 = 7 ≠ 5`, so this is not a modified Kaprekar number. If `n = 9`, still `d = 1`, and `n² = 81`. This gives us `1 + 8 = 9`, the original `n`.

**Note:** r may have leading zeros.

Here's an explanation from Wikipedia about the **ORIGINAL** [Kaprekar Number](https://en.wikipedia.org/wiki/Kaprekar_number) (spot the difference!):

<blockquote>
In mathematics, a Kaprekar number for a given base is a non-negative integer, the representation of whose square in that base can be split into two parts that add up to the original number again. For instance, 45 is a Kaprekar number, because 45² = 2025 and 20+25 = 45.
</blockquote>


Given two positive integers `p` and `q` where `p` is lower than `q`, write a program to print the modified Kaprekar numbers in the range between `p` and `q`, inclusive. If no modified Kaprekar numbers exist in the given range, print `INVALID RANGE`.

## Function Description

Complete the kaprekarNumbers function in the editor below.

kaprekarNumbers has the following parameter(s):

- `int p`: the lower limit
- `int q`: the upper limit

## Prints

It should print the list of modified Kaprekar numbers, space-separated on one line and in ascending order. If no modified Kaprekar numbers exist in the given range, print `INVALID RANGE`. No return value is required.

## Input Format

The first line contains the lower integer limit `p`.

The second line contains the upper integer limit `q`.

**Note:** Your range should be inclusive of the limits.

## Constraints

- `0 < p < q < 100000`

## Sample Input
```
STDIN   Function
-----   --------
1       p = 1
100     q = 100
```

## Sample Output
```
1 9 45 55 99
```

## Explanation

`1`, `9`, `45`, `55`, and `99` are the modified Kaprekar Numbers in the given range.


