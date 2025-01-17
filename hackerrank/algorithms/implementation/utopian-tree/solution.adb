with Ada.Text_IO; use Ada.Text_IO;
with Ada.Integer_Text_IO; use Ada.Integer_Text_IO;
with Ada.Long_Long_Integer_Text_IO; use Ada.Long_Long_Integer_Text_IO;
with Interfaces; use Interfaces;
with Ada.Unchecked_Conversion;
with Ada.Strings.Fixed;

procedure Solution is
    t : Integer;
    n : Integer;
    r : Unsigned_64;

    function To_Unsigned_64 is new
        Ada.Unchecked_Conversion (Integer, Unsigned_64);
    function To_Integer is new
        Ada.Unchecked_Conversion (Unsigned_64, Integer);

begin
    Get (t);
    Skip_Line;

    for i in 1 .. t loop
        Get (n);
        r := To_Unsigned_64 (n);

        Put ( Ada.Strings.Fixed.Trim( Unsigned_64'Image ( 
            Shift_Left (To_Unsigned_64 (1),
              To_Integer ( Shift_Right(r + 1, 1) + 1)
            ) 
            - 1
            - (r and 1)
        ), Ada.Strings.Left));
        New_Line;
    end loop;
end Solution;
