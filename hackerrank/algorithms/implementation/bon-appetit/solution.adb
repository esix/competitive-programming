with Ada.Text_IO; use Ada.Text_IO;
with Ada.Integer_Text_IO; use Ada.Integer_Text_IO;
  
procedure Solution is
    n, k, b, sum, v, bk: Integer;
    result: Integer := 0;
begin
    Get (n);
    Get (k);
    Skip_Line;
    sum := 0;
    for i in 0 .. n - 1 loop
        Get (v);
        sum := sum + v;
        if i = k then
            bk := v;
        end if;
    end loop;
    Skip_Line;
    Get (b);

    result := b - (sum - bk) / 2;

    if result = 0 then
        Put ("Bon Appetit");
    else 
        Put (result, 0);
    end if;
end Solution;
