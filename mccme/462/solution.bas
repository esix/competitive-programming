open "input.txt" for input as #1
open "output.txt" for output as #2

dim as integer n, i, j
dim as integer v
dim as integer count

count = 0

input #1, n

for i = 1 to n
  for j = 1 to n
    input #1, v

    if i <= j then
        count = count + v
    end if

  next j
next i

print #2, count


close #1
close #2
