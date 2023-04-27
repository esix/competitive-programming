# Nabab Siraj-Ud-Dowla [⬀](http://lightoj.com/practice_contest_showproblem.php?contest_id=727&problem=A)

There is a king name Nabab Siraj-Ud-Dowla. He love bananas so much. In his kingdom there is big field which contains many banana trees. We can represent this field as a 2D grid. In this grid some of the cells are contains banana tree, some of them are empty and some of the cells are are for tax area. If you select a cell which contains a banana tree then you can earn a banana and if you select a cell which is tax area then you must pay a banana to Nabab Siraj-Ud-Dowla. 

Nabab Siraj-Ud-Dowla is really an intelligent man like a king, should be. Today he gets an excellent idea. He wants to give you a chance to earn some bananas.But there is a condition for that. That condition is you can select only a square area from this field (2D grid).

Now Nabab Siraj-Ud-Dowla wants to know how many bananas (as much as possible) you can earn from this field.

 

## Input

Input starts with an integer T(<= 213), denoting the number of test cases.

Each case starts with a line containing two integers r and c (1 <= r, c <= 100), r denotes the number of rows and c denotes the number of columns of the modeled grid. Each of the next r lines contains c characters representing the field.

You can assume that there will only three kinds of charter and those are ‘B’, ‘.’ and ‘T’. ‘B’ for banana tree, ‘.’ For empty and ‘T’ for tax area.

## Output

For each case print the case number and the maximum number of banana you can earn.

## Example

### Input:
```
2

3 3
BBB
BBB
BBB

5 5
T.BBB
TBBBB
.BBBB
TBBBB
.BBBB
```

### Output:
```
Case 1: 9
Case 2: 16
```
