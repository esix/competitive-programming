# Java Primality Test [⬀](https://www.hackerrank.com/challenges/java-primality-test)

A prime number is a natural number greater than 
`1` whose only positive divisors are `1` and 
itself. For example, the first six prime 
numbers are `2`, `3`, `5`, `7`, `11`, and `13`.

Given a large integer, `n`, use the Java
BigInteger class' [isProbablePrime](https://docs.oracle.com/javase/7/docs/api/java/math/BigInteger.html#isProbablePrime%28int%29)
method to determine and print whether it's 
prime or not prime.

## Input Format

A single line containing an integer, `n` (the
number to be checked).

## Constraints
- `n` contains at most  digits.

## Output Format

If `n` is a prime number, print `prime`;
otherwise, print `not prime`.

## Sample Input
```
13
```

##v Sample Output
```
prime
```

## Explanation

The only positive divisors of `13` are `1` 
and `13`, so we print `prime`.
