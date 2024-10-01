with Ada.Text_IO; use Ada.Text_IO;
with Ada.Integer_Text_IO; use Ada.Integer_Text_IO;

with Ada.Numerics.Elementary_Functions;
use  Ada.Numerics.Elementary_Functions;

procedure Solution is
    inputString, s, result: String(1..200);
    inputLen, cols, rows, idx: Integer;
    len: Integer := 0;
    rlen: Integer := 0;

begin
    Get_Line (inputString, inputLen);
    for i in 1 .. inputLen loop
        if inputString (i) /= ' ' then
            len := len + 1;
            s (len) := inputString(i);
        end if;
    end loop;


    cols := Integer (Float'Floor (Sqrt (Float (len))));
    rows := cols;

    if rows * cols < len then
        cols := cols + 1;
    end if;

    if rows * cols < len then
        rows := rows + 1;
    end if;

    for c in 0 .. cols - 1 loop
        for r in 0 .. rows - 1 loop
            idx := r * cols + c + 1;
            if idx <= len then
                rlen := rlen + 1;
                result (rlen) := s(r * cols + c + 1);
            end if;
            if r = rows - 1 then
                rlen := rlen + 1;
                result (rlen) := ' ';
            end if;
        end loop;
    end loop;

    Put_Line (result (1 .. rlen));
end Solution;
