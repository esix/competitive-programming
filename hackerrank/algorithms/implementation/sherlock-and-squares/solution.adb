with Ada.Text_IO; use Ada.Text_IO;
with Ada.Integer_Text_IO; use Ada.Integer_Text_IO;

with Ada.Numerics.Generic_Elementary_Functions;

procedure Solution is
    type Real is digits 11;
    package Real_Math is new Ada.Numerics.Generic_Elementary_Functions(Real);
    T: Integer;
    a, b: Integer;
    aa, bb, hi, lo, result: Real;
begin
    Get (T);
    Skip_Line;
    for i in 1 .. T loop
        Get (a);
        Get (b);
        if i < t then 
            Skip_Line;
        end if;

        aa := Real (a);
        bb := Real (b);
        lo := Real'Ceiling (Real_Math.Sqrt (aa));
        hi := Real'Floor (Real_Math.Sqrt (bb));
        result := 1.0 + hi - lo;

        Put (Integer (result), 0);
        Put_Line ("");
    end loop;

end Solution;
