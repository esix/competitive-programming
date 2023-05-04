# Pasha and Tea [⬀](https://codeforces.com/problemset/problem/557/B)

Pasha decided to invite his friends to a tea party. For that occasion, he has a large teapot with the capacity of `w` milliliters and `2n` tea cups, each cup is for one of Pasha's friends. The `i`-th cup can hold at most `aᵢ` milliliters of water.

It turned out that among Pasha's friends there are exactly `n` boys and exactly `n` girls and all of them are going to come to the tea party. To please everyone, Pasha decided to pour the water for the tea as follows:

- Pasha can boil the teapot exactly once by pouring there at most `w` milliliters of water;
- Pasha pours the same amount of water to each girl;
- Pasha pours the same amount of water to each boy;
- if each girl gets `x` milliliters of water, then each boy gets `2x` milliliters of water.

In the other words, each boy should get two times more water than each girl does.

Pasha is very kind and polite, so he wants to maximize the total amount of the water that he pours to his friends. Your task is to help him and determine the optimum distribution of cups between Pasha's friends.

## Input

The first line of the input contains two integers, `n` and `w` (`1 ≤ n ≤ 10⁵`, `1 ≤ w ≤ 10⁹`) — the number of Pasha's friends that are boys (equal to the number of Pasha's friends that are girls) and the capacity of Pasha's teapot in milliliters.

The second line of the input contains the sequence of integers `aᵢ` (`1 ≤ aᵢ ≤ 10⁹`, `1 ≤ i ≤ 2n`) — the capacities of Pasha's tea cups in milliliters.

## Output

Print a single real number — the maximum total amount of water in milliliters that Pasha can pour to his friends without violating the given conditions. Your answer will be considered correct if its absolute or relative error doesn't exceed `10⁻⁶`.

## Examples
### input
```
2 4
1 1 1 1
```

### output
```
3
```

### input
```
3 18
4 4 4 2 2 2
```

### output
```
18
```

### input
```
1 5
2 3
```

### output
```
4.5
```

## Note

Pasha also has candies that he is going to give to girls but that is another task...
