# Climbing the Leaderboard [⬀](https://www.hackerrank.com/challenges/climbing-the-leaderboard)

An arcade game player wants to climb to the top of the leaderboard and track their ranking. The game uses Dense Ranking, so its leaderboard works like this:

- The player with the highest score is ranked number `1` on the leaderboard.
- Players who have equal scores receive the same ranking number, and the next player(s) receive the immediately following ranking number.

## Example

- `ranked = [100, 90, 90, 80]`
- `player = [70, 80, 105]`


The ranked players will have ranks `1`, `2`, `2`, and `3`, respectively. If the player's scores are `70`, `80` and `105`, their rankings after each game are `4ᵗʰ`, `3ʳᵈ` and `1ˢᵗ`. Return `[4, 3, 1]`.

## Function Description

Complete the `climbingLeaderboard` function in the editor below.

`climbingLeaderboard` has the following parameter(s):

- `int ranked[n]`: the leaderboard scores
- `int player[m]`: the player's scores

## Returns

- `int[m]`: the player's rank after each new score

## Input Format

- The first line contains an integer `n`, the number of players on the leaderboard.
- The next line contains `n` space-separated integers `ranked[i]`, the leaderboard scores in decreasing order.
- The next line contains an integer, `m`, the number games the player plays.
- The last line contains `m` space-separated integers `player[i]`, the game scores.

## Constraints

- `1 ≤ n ≤ 2×10⁵`
- `1 ≤ m ≤ 2×10⁵`
- `0 ≤ ranked[] ≤ 10⁹` for `0 ≤ i < n`
- `0 ≤ player[] ≤ 10⁹` for `0 ≤ j < m`
- The existing leaderboard, `ranked`, is in descending order.
- The player's scores, `player`, are in ascending order.

## Subtask

For `60%` of the maximum score:

- `1 ≤ n ≤ 200`
- `1 ≤ m ≤ 200`

## Sample Input 1

<table border>
<tr>
<td>100</td>
<td>100</td>
<td>50</td>
<td>40</td>
<td>40</td>
<td>20</td>
<td>10</td>
</tr>
<tr>
<td align="center" colspan="7">Array: ranked</td>
</tr>
</table>

<table border>
<tr>
<td>5</td>
<td>25</td>
<td>50</td>
<td>120</td>
</tr>
<tr>
<td align="center" colspan="4">Array: player</td>
</tr>
</table>


```
7
100 100 50 40 40 20 10
4
5 25 50 120
```

## Sample Output 1
```
6
4
2
1
```


## Explanation 1

Alice starts playing with `7` players already on the leaderboard, which looks like this:

![](climbingrank.png)
 
After Alice finishes game `0`, her score is `5` and her ranking is `6`:

![](climbingrank1.png)

After Alice finishes game `1`, her score is `25` and her ranking is `4`:

![](climbingrank3.png)

After Alice finishes game `2`, her score is `50` and her ranking is tied with Caroline at `2`:

![](climbingrank4.png)

After Alice finishes game `3`, her score is `120` and her ranking is `1`:

![](climbingrank5.png)


## Sample Input 2

<table border>
<tr>
<td>100</td>
<td>90</td>
<td>90</td>
<td>80</td>
<td>75</td>
<td>60</td>
</tr>
<tr>
<td align="center" colspan="6">Array: ranked</td>
</tr>
</table>

<table border>
<tr>
<td>50</td>
<td>65</td>
<td>77</td>
<td>90</td>
<td>102</td>
</tr>
<tr>
<td align="center" colspan="5">Array: player</td>
</tr>
</table>

```
6
100 90 90 80 75 60
5
50 65 77 90 102
```

## Sample Output 2
```
6
5
4
2
1
```
