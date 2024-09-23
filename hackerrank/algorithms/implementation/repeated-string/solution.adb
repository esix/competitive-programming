with Ada.Text_IO; use Ada.Text_IO; 
with Ada.Long_Long_Integer_Text_IO; use Ada.Long_Long_Integer_Text_IO;

procedure Solution is
    s: String(1..101);
    n, r, len, total, part, result: Long_Long_Integer;
    inputLen: Natural;

begin
    Get_Line(s, inputLen);
    Get(n);

    len := Long_Long_Integer(inputLen);
    r := n mod len;
    total := 0;
    part := 0;
    for i in 1 .. inputLen loop
        if s(i) = 'a' then
            total := total + 1;
            if Long_Long_Integer(i) <= r then 
                part := part + 1;
            end if;
        end if;
    end loop;
    result := total * (n / len) + part;
    Put(result, 0);
end Solution;
