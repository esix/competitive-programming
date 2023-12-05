with Ada.Text_IO; use Ada.Text_IO;
with Ada.Integer_Text_IO; use Ada.Integer_Text_IO;
  
procedure Solution is
    n, v, i, sum : Integer;
begin
    Get (n); Skip_Line;

    sum := 0;
    for i in 1 .. n loop
        Get (v);
        sum := sum + v;
    end loop;
    Put (sum, 0);
end Solution;
