with Ada.Text_IO; use Ada.Text_IO;
with Ada.Integer_Text_IO; use Ada.Integer_Text_IO;
with Ada.Strings; use Ada.Strings;

procedure Solution is
    v: Integer;
    h: array (Character) of Integer;
    word: string(1..11);
    len, max, llen: Natural;
begin
    for c in 97 .. 122 loop
        Get (v);
        h(Character'Val(c)) := v;
    end loop;
    Skip_Line;

    Get_Line(word, len);

    max := h(word(1));

    llen := 0;

    for i in 1 .. len loop
        if 97 <= Character'Pos(word(i)) and Character'Pos(word(i)) <= 122 then
            llen := llen + 1;
            if h(word(i)) > max then
                max := h(word(i));
            end if;
        end if;
    end loop;

    Put (llen * max, 0);
end Solution;
