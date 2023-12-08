with Ada.Text_IO; use Ada.Text_IO;
with Ada.Integer_Text_IO; use Ada.Integer_Text_IO;
  
procedure Solution is
    n, k: Integer;
    ar: array (Integer range 1..100) of Integer;
    result: Integer := 0;
begin
    Get (n);
    Get (k);
    Skip_Line;
    for i in 1 .. n loop
        Get (ar(i));
    end loop;

    for i in 1 .. n - 1 loop
        for j in i + 1 .. n loop
            if (ar(i) + ar(j)) mod k = 0 then 
                result := result + 1;
            end if;
        end loop;
    end loop;

    Put (result, 0);
end Solution;
