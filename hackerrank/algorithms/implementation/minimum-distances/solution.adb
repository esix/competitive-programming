with Ada.Text_IO; use Ada.Text_IO; 
with Ada.Integer_Text_IO; use Ada.Integer_Text_IO;
with Ada.Containers.Indefinite_Ordered_Maps;

procedure Solution is
    n, v : Integer;
    result : Integer := Integer'Last;

    package Integer_Ordered_Maps is new
        Ada.Containers.Indefinite_Ordered_Maps
            (Key_Type        => Integer,
             Element_Type    => Integer);
    use Integer_Ordered_Maps;

    h : Map;

begin
    Get (n);
    Skip_Line;

    for i in 1 .. n loop
        Get (v);
        if h.Contains (v) then
            result := Integer'Min (result, i - h(v));
        end if;

        h.Include (v, i);
    end loop;

    if result = Integer'Last then
        Put (-1, 0);
    else
        Put (result, 0);
    end if;
    New_Line; 

end Solution;
