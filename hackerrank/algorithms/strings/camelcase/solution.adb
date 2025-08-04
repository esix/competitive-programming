with Ada.Text_IO; use Ada.Text_IO;
with Ada.Integer_Text_IO; use Ada.Integer_Text_IO;

procedure Solution is
   S : String := Get_Line;
   Count : Integer := 1;
begin
   for C of S loop
      if C in 'A' .. 'Z' then
         Count := Count + 1;
      end if;
   end loop;
   Put(Count, 0);
end Solution;
