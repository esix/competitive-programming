# Graveyard Design [⬀](http://poj.org/problem?id=2100)


## Description

King George has recently decided that he would like to have a new design for the royal graveyard. The graveyard must consist of several sections, each of which must be a square of graves. All sections must have different number of graves.
After a consultation with his astrologer, King George decided that the lengths of section sides must be a sequence of successive positive integer numbers. A section with side length `s` contains `s²` graves. George has estimated the total number of graves that will be located on the graveyard and now wants to know all possible graveyard designs satisfying the condition. You were asked to find them.

## Input

Input file contains n --- the number of graves to be located in the graveyard (`1 <= n <= 10¹⁴`).

## Output

On the first line of the output file print `k` — the number of possible graveyard designs. Next `k` lines must contain the descriptions of the graveyards. Each line must start with `l` — the number of sections in the corresponding graveyard, followed by `l` integers — the lengths of section sides (successive positive integer numbers). Output line's in descending order of `l`.

### Sample Input
```
2030
```

### Sample Output
```
2
4 21 22 23 24
3 25 26 27
```

## Source

Northeastern Europe 2004, Northern Subregion
