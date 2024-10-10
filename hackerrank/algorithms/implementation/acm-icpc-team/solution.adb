with Ada.Text_IO; use Ada.Text_IO;
with Ada.Integer_Text_IO; use Ada.Integer_Text_IO;
with Ada.Strings; use Ada.Strings;

procedure Solution is
    n, m, len, pc : Integer;
    topics : array (1..500) of string(1..501);
    r1 : Integer := 0;
    r2 : Integer := 0;

    function PopcountOr (t1 : string; t2 : string) return Integer is
        result: Integer := 0;
    begin
        for i in 1 .. m loop
            if t1 (i) = '1' or t2(i) = '1' then
                result := result + 1;
            end if;
        end loop;
        return result;
    end PopcountOr;

begin
    Get (n);
    Get (m);
    Skip_Line;

    for i in 1 .. n loop
        Get_Line(topics(i), len);
    end loop;

    for i in 1 .. n - 1 loop
        for j in i .. n loop
            pc := PopcountOr (topics (i), topics (j));
            if pc > r1 then
                r1 := pc;
                r2 := 1;
            elsif pc = r1 then
                r2 := r2 + 1;
            end if;
        end loop;
    end loop;

    Put (r1, 0);
    New_Line;
    Put (r2, 0);

end Solution;
