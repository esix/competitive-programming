# [Help Me with the Game](http://poj.org/problem?id=2996)

## Description

Your task is to read a picture of a chessboard position and print it in the chess notation.

## Input

The input consists of an ASCII-art picture of a chessboard with chess pieces on positions described by the input. The pieces of the white player are shown in upper-case letters, while the black player's pieces are lower-case letters. The letters are one of "`K`" (King), "`Q`" (Queen), "`R`" (Rook), "`B`" (Bishop), "`N`" (Knight), or "`P`" (Pawn). The chessboard outline is made of plus ("`+`"), minus ("`-`"), and pipe ("`|`") characters. The black fields are filled with colons ("`:`"), white fields with dots ("`.`").

## Output

The output consists of two lines. The first line consists of the string "`White: `", followed by the description of positions of the pieces of the white player. The second line consists of the string "`Black: `", followed by the description of positions of the pieces of the black player.

The description of the position of the pieces is a comma-separated list of terms describing the pieces of the appropriate player. The description of a piece consists of a single upper-case letter that denotes the type of the piece (except for pawns, for that this identifier is omitted). This letter is immediatelly followed by the position of the piece in the standard chess notation -- a lower-case letter between "`a`" and "`h`" that determines the column ("`a`" is the leftmost column in the input) and a single digit between `1` and `8` that determines the row (`8` is the first row in the input).

The pieces in the description must appear in the following order: `King`("`K`"), `Queens` ("`Q`"), `Rooks` ("`R`"), `Bishops` ("`B`"), `Knights` ("`N`"), and pawns. Note that the numbers of pieces may differ from the initial position because of capturing the pieces and the promotions of pawns. In case two pieces of the same type appear in the input, the piece with the smaller row number must be described before the other one if the pieces are white, and the one with the larger row number must be described first if the pieces are black. If two pieces of the same type appear in the same row, the one with the smaller column letter must appear first.

### Sample Input
```
+---+---+---+---+---+---+---+---+
|.r.|:::|.b.|:q:|.k.|:::|.n.|:r:|
+---+---+---+---+---+---+---+---+
|:p:|.p.|:p:|.p.|:p:|.p.|:::|.p.|
+---+---+---+---+---+---+---+---+
|...|:::|.n.|:::|...|:::|...|:p:|
+---+---+---+---+---+---+---+---+
|:::|...|:::|...|:::|...|:::|...|
+---+---+---+---+---+---+---+---+
|...|:::|...|:::|.P.|:::|...|:::|
+---+---+---+---+---+---+---+---+
|:P:|...|:::|...|:::|...|:::|...|
+---+---+---+---+---+---+---+---+
|.P.|:::|.P.|:P:|...|:P:|.P.|:P:|
+---+---+---+---+---+---+---+---+
|:R:|.N.|:B:|.Q.|:K:|.B.|:::|.R.|
+---+---+---+---+---+---+---+---+
```

### Sample Output
```
White: Ke1,Qd1,Ra1,Rh1,Bc1,Bf1,Nb1,a2,c2,d2,f2,g2,h2,a3,e4
Black: Ke8,Qd8,Ra8,Rh8,Bc8,Ng8,Nc6,a7,b7,c7,d7,e7,f7,h7,h6
```

## Source

CTU Open 2005
