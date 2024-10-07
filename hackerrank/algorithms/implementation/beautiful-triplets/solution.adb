with Ada.Text_IO; use Ada.Text_IO;
with Ada.Integer_Text_IO; use Ada.Integer_Text_IO;

with Ada.Containers; use Ada.Containers;
with Ada.Containers.Vectors;

procedure Solution is
    package Integer_Vectors is new
        Ada.Containers.Vectors
            (Index_Type   => Natural,
            Element_Type => Integer);

    use Integer_Vectors;
   
    n, d, el : Integer;
    arr : Vector;
    result : Integer := 0;

    function binSearch (v: Integer) return Boolean is
        function rec (lo : Integer; hi : Integer) return Boolean is
            c : Integer;
        begin
            if arr (lo) = v or arr (hi) = v then
                return True;
            end if;
            if hi - lo <= 1 then
                return False;
            end if;
            c := (lo + hi) / 2;
            if v < arr (c) then 
                return rec(lo, c); 
            else 
                return rec(c, hi); 
            end if;
        end rec;
    begin
        return rec (0, n - 1);
    end binSearch;

begin
    Get (n);
    Get (d);
    Skip_Line;
    for i in 1 .. n loop
        Get (el);
        arr.Append (el);
    end loop;

    for i in 0 .. n - 2 loop
        if binSearch (arr(i) + d) and binSearch (arr (i) + d + d) then
            result := result + 1;
        end if;
    end loop;

    Put (result, 0);
    New_Line;

end Solution;
