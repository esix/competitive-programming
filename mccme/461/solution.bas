open "input.txt" for input as #1
open "output.txt" for output as #2

dim as integer n, i, j
dim as integer v
dim as integer is_good

is_good = 1

input #1, n

for i = 1 to n
  for j = 1 to n
    input #1, v

    if i = j and v <> 0 then
        is_good = 0
    end if

  next j
next i

if is_good then
    print #2, "NO"
else
    print #2, "YES"
end if


close #1
close #2
