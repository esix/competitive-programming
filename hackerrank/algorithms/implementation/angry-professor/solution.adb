with Ada.Text_IO; use Ada.Text_IO;
with Ada.Integer_Text_IO; use Ada.Integer_Text_IO;
use Ada;


procedure Solution is
    Tests, t: Integer;
    n, k, v, acc: Integer;

begin
    Get (Tests);
    Skip_Line;

    for t in 1 .. Tests loop
        Get(n);
        Get(k);
        Skip_Line;
        acc := 0;
        for i in 0 .. n - 1 loop
            Get (v);
            if v <= 0 then
                acc := acc + 1;
            end if;
        end loop;

        if t < Tests then
            Skip_Line;
        end if;

        if acc >= k then
            Put ("NO");
        else
            Put ("YES");
        end if;
        New_Line;


    end loop;

end Solution;
