open "input.txt" for input as #1
open "output.txt" for output as #2

dim as integer n, i, j
dim as integer v

input #1, n

for i = 1 to n
  for j = 1 to n
    input #1, v
    if i <= j and v = 1 then
        print #2, i, " ", j
    end if

  next j
next i



close #1
close #2
