with Ada.Text_IO; use Ada.Text_IO;
with Ada.Integer_Text_IO; use Ada.Integer_Text_IO;
with Ada.Strings; use Ada.Strings;

procedure Solution is
    r, c, n, len : Integer;
    type TGrid is array (1..201) of  string(1..201);
    Grid, NextGrid : TGrid;

    function IsO (i: Integer; j : Integer) return Boolean is
    begin
      if i < 1 or i > r or j < 1 or j > c then
          return False;
      end if;
      return Grid (i) (j) = 'O';
    end;

    procedure NextStep is
    begin
        for i in 1 .. r loop
            for j in 1 .. c loop
                if isO (i, j) or isO (i + 1, j) or isO (i - 1, j) or 
                   isO (i, j + 1) or isO (i, j - 1) then
                    NextGrid (i) (j) := '.';
                else
                    NextGrid (i) (j) := 'O';
                end if;
            end loop;
        end loop;

        Grid := NextGrid;
    end NextStep;

    procedure FillWithO is
    begin
        for i in 1 .. r loop
            for j in 1 .. c loop
                Grid (i) (j) := 'O';
            end loop;
        end loop;
    end FillWithO;

begin
    Get (r);
    Get (c);
    Get (n);
    Skip_Line;

    for i in 1 .. r loop
        Get_Line (Grid (i), len);
    end loop;

    if n mod 2 = 0 then
        FillWithO;
    elsif n = 1 then
        Grid := Grid;
    elsif n = 3 then
        NextStep;
    elsif n mod 4 = 1 then
        NextStep;
        NextStep;
    elsif n mod 4 = 3 then
        NextStep;
        NextStep;
        NextStep;
    end if; 

    for i in 1 .. r loop
        for j in 1 .. c loop
            Put ( grid (i) (j));
        end loop;
        New_Line;
    end loop;

end Solution;
