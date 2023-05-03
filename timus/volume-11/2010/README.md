# Sasha the Young Grandmaster [⬀](https://acm.timus.ru/problem.aspx?space=1&num=2010)

Little Sasha is quite determined to learn to play chess. First of all he of course learned how each chess piece could move (except for the pawn as its moving strategy turned out so complicated that Sasha failed to remember them). Then his older brother Oleg came in to check Sasha’s progress. He chose some square on the chessboard and started putting pieces on the square, one by one, asking his little brother: “How many squares are now under attack?”

That was rather stressful for Sasha and he asked you to help him.

The chessboard is a field of n × n square cells. The rook can move any number of cells, but only horizontally or vertically. The bishop can move any number of cells, but only diagonally. The queen can move any number of cells horizontally, vertically or diagonally. The king can move one cell horizontally, vertically or diagonally and the knight makes “L” shaped moves, that is, it moves either one cell horizontally and two cells vertically or two cells horizontally and one cell vertically.

## Input

The first line contains an integer `n` that is the size of the side of the field (`1 ≤ n ≤ 10⁸`). The second line contains integers `x` and `y` that are the coordinates of the cell where Oleg puts the pieces (`1 ≤ x, y ≤ n`).

## Output

Output the number of cells that can be hit by king, by knight, by bishop, by rook, and by queen, correspondingly. Follow the format from the sample test.

## Sample

<table>
<tr>
<th>input</th>
<th>output</th>
</tr>
<tr>
<td style="vertical-align: top">
<pre style="white-space:pre">
8
5 2
</pre>
</td>
<td style="vertical-align: top">
<pre style="white-space:pre">
King: 8
Knight: 6
Bishop: 9
Rook: 14
Queen: 23
</pre>
</td>
</tr>
</table>
