# The PATH [⬀](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=8&page=show_problem&problem=542)

“PATH” is a game played by two players on an `N` by `N` board, where `N` is a positive integer. (If `N` = 8, the board looks like a chess board.) Two players “`WHITE`” and “`BLACK`” compete in the game to build a path of pieces played on the board from the player’s “home” edge to the player’s “target” edge, opposite the home edge. `WHITE` uses white pieces and `BLACK` uses black pieces.

For this problem you will play the “referee” for the game, analyzing boards containing black and white pieces to determine whether either of the players has won the game or if one of the players can win by placing one of their pieces in an unfilled position. `WHITE`’s turn is next.

A representation of a board on paper (and in a computer) is an `N × N` matrix of characters `W`, `B`, and `U`; where `W` represents white pieces, `B` represents black pieces, and `U` represents unfilled positions on the board.

When we view a matrix representation of the board on paper, `WHITE`’s home edge is the left edge of the board (the first column), and `WHITE`’s target edge is the right edge (the last column). `BLACK`’s home edge is the top edge of the board (the first row), and `BLACK`’s target edge is the bottom edge (the last row). Thus `WHITE` wants to build a path from left to right, and `BLACK` wants to build a path from top to bottom.

Two locations on the board are “adjacent” if one is immediately to the left, to the right, above, or below the other. Thus an interior location on the board is adjacent to four other locations. For `N > 1`, corner locations each have two adjacent locations, and for `N > 2`, other border locations have three adjacent locations.

A path is a sequence of distinct positions on the board, `L₀`, `L₁`, …, `Lₖ`, such that each pair `Lᵢ` and `Lᵢ₊₁` are adjacent for `i = 0, …, k − 1`. A winning path for a player is a path `L₀`, `L₁`, …, `Lₖ` filled with the player’s pieces such that `L₀` is a position on the player’s home edge and `Lₖ` is a position on the player’s target edge. It is clear that if one player has a winning path then the other player is blocked from having a winning path. Thus if all the squares contain pieces, either there are no winning paths or exactly one of the players has at least one winning path.

## Input

Input is a series of game board data sets. Each set begins with a line containing an integer specifying the size `N`, `0 < N < 81` of the (`N × N`) game board. This is followed by a blank line and then by `N` lines, one for each row of the game board, from the top row to the bottom row. Each line begins with character and consists of `N` adjacent characters from the set ‘`B`’, ‘`W`’, ‘`U`’. A blank line separates each non-zero data set from the following data set. The input is terminated by a single line containing a board size of zero.

Output

As referee, for each game board in a series of game boards your program should report one of the five types of answers below:

<pre>
White has a winning path.
Black has a winning path.
White can win in one move. <i>(White can place a piece in an unfilled position)</i>
Black can win in one move. <i>(White can’t win in one move AND Black can if White does’t move)</i>
There is no winning path.
</pre>

### Discussion:

For the `7×7` board, the shortest winning path for `WHITE` covers 15 locations. For the `3×3` board, `WHITE` appears to have a path from top to bottom, but remember, `WHITE` wants a path from left to right.

## Sample Input

```
7
WBBUUUU
WWBUWWW
UWBBBWB
BWBBWWB
BWWBWBB
UBWWWBU
UWBBBWW

3
WBB
WWU
WBB

0
```

### Sample Output

```
White has a winning path.
White can win in one move.
```
