# [Binary Search Tree 1](https://www.e-olymp.com/en/problems/4146)
Implement a balanced binary search tree.

## Input
Contains the description of operations on the tree, their number is not greater than 100000. Each line contains one of the next operations:

- `insert x` - add the key x into the tree. If the key x is already in the tree, do nothing.
- `delete x` - delete the key x from the tree. If the tree does not contain the key x, do nothing.
- `exists x` - if the key x is in the tree, print "true", otherwise print "false".

All numbers are integers not greater than 10⁹ by absolute value.

## Output
Print the result of all operations exists in format given in sample output.

## Input example #1
```
insert 2
insert 5
insert 3
exists 2
exists 4
delete 5
```

## Output example #1
```
true
false
```
