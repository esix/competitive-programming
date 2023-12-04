with Ada.Text_IO; use Ada.Text_IO;
with Ada.Integer_Text_IO; use Ada.Integer_Text_IO;
  
procedure Solution is
    a : Integer;
    b : Integer;
    sum : Integer;
begin
    Get (a);
    Skip_Line;
    Get (b);
    sum := a + b;
    Put (sum, 0);
end Solution;
