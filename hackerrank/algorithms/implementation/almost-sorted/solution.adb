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

    n, el, numOfWrong, idx, idx2 : Integer;
    arr, sorted : Vector;

begin
    Get (n);
    Skip_Line;
    for i in 1 .. n loop
        Get (el);
        arr.Append (el);
    end loop;

    sorted := arr;
    Sort (sorted);

    numOfWrong := 0;
    idx := -1;

    for i in 0 .. n - 1 loop
        el := arr (i);
        if el /= sorted (i) then
            numOfWrong := numOfWrong + 1;
            idx2 := i;
            if idx = -1 then
                idx := i;
            end if;
        end if;
    end loop;

    if numOfWrong = 0 then
        Put_Line ("yes");
        return;
    end if;


    if numOfWrong = 2 then
        Put_Line ("yes");
        Put_Line ("swap" & Integer'Image (idx + 1) & Integer'Image (idx2 + 1));
        return;
    end if;

    for i in 0 .. idx2 - idx loop
        el := arr (idx2 - i);
        if sorted (idx + i) /= el then 
            Put_Line ("no");
            return;
        end if;
    end loop;

    Put_Line ("yes");
    Put_Line ("reverse" & Integer'Image (idx + 1) & Integer'Image (idx2 + 1));
end Solution;
