# Alena's Schedule [⬀](https://codeforces.com/problemset/problem/586/A)

Alena has successfully passed the entrance exams to the university and is now looking forward to start studying.

One two-hour lesson at the Russian university is traditionally called a pair, it lasts for two academic hours (an academic hour is equal to 45 minutes).

The University works in such a way that every day it holds exactly `n` lessons. Depending on the schedule of a particular group of students, on a given day, some pairs may actually contain classes, but some may be empty (such pairs are called breaks).

The official website of the university has already published the schedule for tomorrow for Alena's group. Thus, for each of the `n` pairs she knows if there will be a class at that time or not.

Alena's House is far from the university, so if there are breaks, she doesn't always go home. Alena has time to go home only if the break consists of at least two free pairs in a row, otherwise she waits for the next pair at the university.

Of course, Alena does not want to be sleepy during pairs, so she will sleep as long as possible, and will only come to the first pair that is presented in her schedule. Similarly, if there are no more pairs, then Alena immediately goes home.

Alena appreciates the time spent at home, so she always goes home when it is possible, and returns to the university only at the beginning of the next pair. Help Alena determine for how many pairs she will stay at the university. Note that during some pairs Alena may be at the university waiting for the upcoming pair.

## Input
The first line of the input contains a positive integer `n` (`1 ≤ n ≤ 100`) — the number of lessons at the university.

The second line contains `n` numbers `aᵢ` (`0 ≤ aᵢ ≤ 1`). Number `aᵢ` equals `0`, if Alena doesn't have the `i`-th pairs, otherwise it is equal to `1`. Numbers `a₁`, `a₂`, ..., `aₙ` are separated by spaces.

## Output
Print a single number — the number of pairs during which Alena stays at the university.

## Examples

### input
```
5
0 1 0 1 1
```

### output
```
4
```

### input
```
7
1 0 1 0 0 1 0
```

### output
```
4
```

### input
```
1
0
```

### output
```
0
```

## Note

In the first sample Alena stays at the university from the second to the fifth pair, inclusive, during the third pair she will be it the university waiting for the next pair.

In the last sample Alena doesn't have a single pair, so she spends all the time at home.