with Ada.Text_IO; use Ada.Text_IO; 
with Ada.Integer_Text_IO; use Ada.Integer_Text_IO;

procedure Solution is
    d1, m1, y1, d2, m2, y2: Integer;
    dm, dd, r: Integer;
begin
    Get(d1); Get(m1); Get(y1); Skip_Line;
    Get(d2); Get(m2); Get(y2);

    dm := Integer'max(0, m1 - m2);
    dd := Integer'max(0, d1 - d2);
    r := Boolean'Pos(y1 = y2) * (500 * dm + 15 * dd * Boolean'Pos(m1 = m2)) + Boolean'Pos(y1 > y2) * 10000;

    Put(r, 0);
end Solution;
