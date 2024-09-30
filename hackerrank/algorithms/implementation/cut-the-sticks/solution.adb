with Ada.Text_IO; use Ada.Text_IO;
with Ada.Integer_Text_IO; use Ada.Integer_Text_IO;

with Ada.Containers; use Ada.Containers;
with Ada.Containers.Vectors;

procedure Solution is
    package Integer_Vectors is new
        Ada.Containers.Vectors
            (Index_Type   => Natural,
            Element_Type => Integer);

    package Integer_Vectors_Sorting is
        new Integer_Vectors.Generic_Sorting;

    use Integer_Vectors;
    use Integer_Vectors_Sorting;
   
    n, el, prev: Integer;
    ar: Vector;

begin
    Get (n);
    Skip_Line;
    for i in 1 .. n loop
        Get (el);
        ar.Append (el);
    end loop;

    Sort (ar);

    prev := ar(0);
    Put (n, 0);
    New_Line;

    for i in 1 .. n - 1 loop
        if ar(i) /= prev then
            prev := ar (i);
            Put (n - i, 0);
            New_Line;
        end if;
    end loop;

end Solution;
