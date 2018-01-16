# [Fast Exponentiation](https://www.e-olymp.com/en/contests/9520/problems/83413)

Very often arises the problem of effective calculation `xⁿ` by given **x** and **n**, where **n** is a positive integer.

For example, assume that it is necessary to calculate the `x¹⁶`. You can simply start with **x** and **15** times multiply it by **x**. But the same answer can be obtained in just four multiplication, if several times squared to obtain results consistently calculating `x²`, `x⁴`, `x⁰`, `x¹⁶`.

The same idea is generally applicable to any value of **n** as follows. Write **n** as a number in the binary system (removing zeros from the left). Then replace each "**1**" with pair of characters **SX**, and each "**0**" with symbol **S** and delete the leftmost pair of characters "**SX**". The result is a rule for computing xⁿ, where "**S**" is treated as a squaring operation, and "**X**" as the operation of multiplication by **x**. For example **n = 23** has a binary representation **10111**. So we create a sequence **SXSSXSXSX**, from which we remove the first pair **SX** to get the final rule **SSXSXSX**. This rule says that it is necessary to "square, square, multiply by **x**, square, multiply by **x**, square and multiply by **x**", i.e. to calculate consistently the values `x²`, `x⁴`, `x⁵`, `x¹⁰`, `x¹¹`, `x²²`, `x²³`.

You need to formulate for a given **n** the corresponding rule for finding `xⁿ`.

## Input
One positive integer n, not greater than `2·10⁹`.

## Output
Print the string for the rule how to raise **x** to power **n** to get `xⁿ`.

## Input example #1
```
23
```

## Output example #1
```
SSXSXSX
```
