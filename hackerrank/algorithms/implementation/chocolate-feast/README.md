# Chocolate Feast [⬀](https://www.hackerrank.com/challenges/chocolate-feast)

Little Bobby loves chocolate. He frequently goes to his favorite `5 & 10` store, Penny Auntie, to buy them. They are having a promotion at Penny Auntie. If Bobby saves enough wrappers, he can turn them in for a free chocolate.

## Example
```
n = 15
c = 3
m = 2
```

He has `15` to spend, bars cost `3`, and he can turn in `2` wrappers to receive another bar. Initially, he buys `5` bars and has `5` wrappers after eating them. He turns in `4` of them, leaving him with `1`, for `2` more bars. After eating those two, he has `3` wrappers, turns in `2` leaving him with `1` wrapper and his new bar. Once he eats that one, he has `2` wrappers and turns them in for another bar. After eating that one, he only has `1` wrapper, and his feast ends. Overall, he has eaten `5 + 2 + 1 + 1 = 9` bars.

## Function Description

Complete the chocolateFeast function in the editor below.

chocolateFeast has the following parameter(s):

- `int n`: Bobby's initial amount of money
- `int c`: the cost of a chocolate bar
- `int m`: the number of wrappers he can turn in for a free bar

## Returns

- `int`: the number of chocolates Bobby can eat after taking full advantage of the promotion

**Note:** Little Bobby will always turn in his wrappers if he has enough to get a free chocolate.

## Input Format

The first line contains an integer, `t`, the number of test cases to analyze.


Each of the next `t` lines contains three space-separated integers: `n`, `c`, and `m`. They represent money to spend, cost of a chocolate, and the number of wrappers he can turn in for a free chocolate.

## Constraints
- `1 ≤ t ≤ 1000`
- `2 ≤ n ≤ 10⁵`
- `1 ≤ c ≤ n`
- `2 ≤ m ≤ n`

## Sample Input
```
STDIN   Function
-----   --------
3       t = 3 (test cases)
10 2 5  n = 10, c = 2, m = 5 (first test case)
12 4 4  n = 12, c = 4, m = 4 (second test case)
6 2 2   n = 6,  c = 2, m = 2 (third test case)
```

## Sample Output
```
6
3
5
```

## Explanation

Bobby makes the following `3` trips to the store:

1. He spends `10` on `5` chocolates at `2` apiece. He then eats them and exchanges all  wrappers to get `5` more. He eats `6` chocolates.
2. He spends his `12` on `3` chocolates at `4` apiece. He has `4` wrappers, but needs `4` to trade for his next chocolate. He eats `3` chocolates.
3. He spends `6` on `3` chocolates at `2` apiece. He then exchanges `2` of the `3` wrappers for `1` additional piece. Next, he uses his third leftover chocolate wrapper from his initial purchase with the wrapper from his trade-in to do a second trade-in for `1` more piece. At this point he has `1` wrapper left, which is not enough to perform another trade-in. He eats `5` chocolates.
