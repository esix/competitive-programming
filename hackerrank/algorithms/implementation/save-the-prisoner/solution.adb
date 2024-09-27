with Ada.Text_IO; use Ada.Text_IO;
with Ada.Integer_Text_IO; use Ada.Integer_Text_IO;
use Ada;

procedure Solution is
    Tests, t: Integer;
    n, m, s, v: Integer;

begin
    Get (Tests);
    Skip_Line;

    for t in 1 .. Tests loop
        Get(n);
        Get(m);
        Get(s);
        if t < Tests then
            Skip_Line;
        end if;

        v := (s - 2 + m) mod n + 1;
        Put (v, 0);
        New_Line;
    end loop;

end Solution;
