open "input.txt" for input as #1
open "output.txt" for output as #2

dim as integer n, k, x 
dim as integer v(1000)
dim as integer is_found

is_found = 0

input #1, n
for k = 1 to n
  input #1, v(k)
next k
input #1, x

for k = 1 to n
  if v(k) = x then
    is_found = -1
    exit for
  end if
next k

if is_found then
  print #2, "YES"
else
  print #2, "NO"
end if


close #1
close #2
