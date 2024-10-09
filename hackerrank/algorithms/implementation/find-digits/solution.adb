with Ada.Text_IO; use Ada.Text_IO; 
with Ada.Integer_Text_IO; use Ada.Integer_Text_IO;
with Ada.Long_Long_Integer_Text_IO; use Ada.Long_Long_Integer_Text_IO;

procedure Solution is
    T, count : Integer;
    n, x, d : Long_Long_Integer;

begin
    Get (T);
    Skip_Line;

    for i in 1 .. T loop
        Get (n);
        if i < T then
            Skip_Line;
        end if;
        count := 0;
        x := n;

        while x > 0 loop
            d := x mod 10;
            x := x / 10;
            if d > 0 then
                if n mod d = 0 then
                    count := count + 1;
                end if;
            end if;
        end loop;

        Put (count, 0);
        New_Line;

    end loop;

end Solution;
