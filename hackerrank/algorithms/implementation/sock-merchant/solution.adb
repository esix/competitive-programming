with Ada.Text_IO; use Ada.Text_IO;
with Ada.Integer_Text_IO; use Ada.Integer_Text_IO;
  
procedure Solution is
    n, v: Integer;
    counts: array (Integer range 1..100) of Integer;
    result: Integer := 0;
begin
    Get (n);
    Skip_Line;
    for i in 1 .. 100 loop
        counts(i) := 0;
    end loop;

    for i in 1 .. n loop
        Get (v);
        counts(v) := counts(v) + 1;
        if counts(v) mod 2 = 0 then
            result := result + 1;
        end if;
    end loop;

    Put (result, 0);
end Solution;
