with Ada.Text_IO; use Ada.Text_IO;
with Ada.Integer_Text_IO; use Ada.Integer_Text_IO;
with Ada.Strings; use Ada.Strings;

procedure Solution is
    n: Integer;
    s: Integer := 5;
    l: Integer := 2;
    c: Integer := 2;
begin
    Get (n);
    for i in 2 .. n loop
        s := l * 3;
        l := s / 2;
        c := c + l;
    end loop;
    Put (c, 0);
end Solution;
