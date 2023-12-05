with Ada.Text_IO; use Ada.Text_IO;
with Ada.Integer_Text_IO; use Ada.Integer_Text_IO;
  
procedure Solution is
    x1, v1, x2, v2: Integer;
    dx, dv: Integer;
    res: Boolean;
begin
    Get (x1);
    Get (v1);
    Get (x2);
    Get (v2);
    dx := x2 - x1;
    dv := v2 - v1;
    res := (dv = 0 and dx = 0) or (dv /= 0 and then dx mod dv = 0 and then dx / dv <= 0);  
    if (res) then
        Put ("YES");
    else
        Put ("NO");
    end if;
end Solution;
