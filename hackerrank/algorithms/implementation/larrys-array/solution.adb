with Ada.Text_IO; use Ada.Text_IO;
with Ada.Integer_Text_IO; use Ada.Integer_Text_IO;

procedure Solution is
  type Integer_Array is array (Positive range <>) of Integer;

  function Calculate_Parity(A: in Integer_Array) return Boolean is
    Parity : Integer := 0;
  begin
    for I in A'First .. A'Last - 1 loop
      for J in I + 1 .. A'Last loop
        if A(I) > A(J) then
          Parity := Parity + 1;
        end if;
      end loop;
    end loop;
    return Parity mod 2 = 0;
  end Calculate_Parity;
  
  T, N : Integer;
begin
  Get(T);
  Skip_Line;

  for Test_Case in 1 .. T loop
    Get(N);
    Skip_Line;

    declare
      A : Integer_Array(1 .. N);
    begin
      for I in 1 .. N loop
        Get(A(I));
      end loop;
      
      if not End_Of_File then
        Skip_Line;
      end if;

      if Calculate_Parity(A) then
        Put_Line("YES");
      else
        Put_Line("NO");
      end if;
    end;
  end loop;
end Solution;
