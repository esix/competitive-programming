pragma Ada_2020;

with Ada.Text_IO; use Ada.Text_IO; 
with Ada.Integer_Text_IO; use Ada.Integer_Text_IO;

procedure Solution is
    n, m, c, i: Integer;
    r: array (Integer range 0..200) of Integer;
begin
    Get (n);
    r(0) := 1;
    for i in 1 .. 200 loop
      r(i) := 0;
    end loop;

    for m in 2 .. n loop
        c := 0;
        for i in 0 .. 200 loop
            r(i) := r(i) * m + c;
            c := r(i) / 10;
            r(i) := r(i) mod 10;
        end loop;
    end loop;

    i := 200;
    while r(i) = 0 loop
      i := i - 1;
    end loop;

    while i >= 0 loop
      Put(r(i), 0);
      i := i - 1;
    end loop;
end Solution;
