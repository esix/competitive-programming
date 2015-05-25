open "input.txt" for input as #1

dim as integer n, m, k, i, j, value
dim as integer v(100,100)
dim as string s

input #1, n, m

for k = 1 to m
  input #1, i, j
  v(i, j) = 1
next k

for i = 1 to n 
  s = ""
  for j = 1 to n 
    value = v(i, j)
    s = s + str$(v(i,j)) + " "
  next j
  print s
next i



close #1
