with Ada.Text_IO; use Ada.Text_IO;
with Ada.Integer_Text_IO; use Ada.Integer_Text_IO;
  
procedure Solution is
    n: Integer;
    c: array (Integer range 0..100) of Integer;
    a0, a1, temp: Integer;
    result: Integer := 1;
    INF: constant Integer := Integer'Last - 100;
begin
    Get (n);
    Skip_Line;
    for i in 0 .. n - 1 loop
        Get (c(i));
    end loop;

    if n > 2 then
        a1 := (if c(1) = 0 then 1 else INF);
        a0 := (if c(2) = 0 then 1 else INF);
        for i in 3 .. n - 1 loop
            temp := a0;
            a0 := (if c(i) = 0 then Integer'Min(a0, a1) + 1 else INF);
            a1 := temp;
        end loop;
        result := a0;
    end if;

    Put (result, 0);
end Solution;
