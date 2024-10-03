with Ada.Text_IO; use Ada.Text_IO;
with Ada.Integer_Text_IO; use Ada.Integer_Text_IO;
  
procedure Solution is
    n: Integer;
    arr: array (Integer range 1..100) of Integer;
    count: array (Integer range 1..100) of Integer;
    maxCountValue : integer;
    el: Integer;
begin
    Get (n);
    Skip_Line;
    for i in 1 .. n loop
        Get (arr(i));
    end loop;

    for i in 1 .. 100 loop
        count(i) := 0;
    end loop;

    maxCountValue := arr(1);
    for i in 1 .. n loop
        el := arr(i);
        count(el) := count(el) + 1;
        if count(el) > count(maxCountValue) then
            maxCountValue := el;
        end if;
    end loop;

    Put (n - count(maxCountValue), 0);
end Solution;
