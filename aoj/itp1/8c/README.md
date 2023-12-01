# Counting Characters [⬀](https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_8_C)

Write a program which counts and reports the number of each alphabetical letter. Ignore the case of characters.

## Input
Multiple strings are given. Input may be given in multiple lines.

## Output
Output the number of each alphabet in the given input in the format shown below
```
a : The number of 'a'
b : The number of 'b'
c : The number of 'c'
  .
  .
z : The number of 'z'
```

## Constraints

The number of characters in the sentence < 1200
A string consists of lowercase and uppercase letters, numbers, and symbols

## Sample Input 1
```
This is a pen.
```

## Sample Output 1
```
a : 1
b : 0
c : 0
d : 0
e : 1
f : 0
g : 0
h : 1
i : 2
j : 0
k : 0
l : 0
m : 0
n : 1
o : 0
p : 1
q : 0
r : 0
s : 2
t : 1
u : 0
v : 0
w : 0
x : 0
y : 0
z : 0
```

## Sample Input 2
```
ABCD E F Z
x
y
z
```

## Sample Output 2

```
a : 1
b : 1
c : 1
d : 1
e : 1
f : 1
g : 0
h : 0
i : 0
j : 0
k : 0
l : 0
m : 0
n : 0
o : 0
p : 0
q : 0
r : 0
s : 0
t : 0
u : 0
v : 0
w : 0
x : 1
y : 1
z : 2
```