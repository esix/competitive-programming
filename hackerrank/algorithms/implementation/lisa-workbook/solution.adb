with Ada.Text_IO; use Ada.Text_IO;
with Ada.Integer_Text_IO; use Ada.Integer_Text_IO;

procedure Solution is
  type Integer_Array is array (Positive range <>) of Integer;

  function Workbook(A : in Integer_Array; K : Integer) return Integer is
    Page : Integer := 1;
    Result : Integer := 0;
    Min_Problem, Max_Problem : Integer;
  begin
    for I in A'Range loop
      declare
        Chapter : Integer := I;
        Count : Integer := A(I);
        J : Integer := 1;
      begin
        while J <= Count loop
            Min_Problem := J;
            Max_Problem := Integer'Min(Count, J + K - 1);
            
            if Min_Problem <= Page and then Page <= Max_Problem then
              Result := Result + 1;
            end if;
            
            Page := Page + 1;
            J := J + K;
        end loop;
      end;
    end loop;
    return Result;
  end Workbook;
  
  N, K : Integer;
begin
  Get(N);
  Get(K);
  Skip_Line;

  declare
    A : Integer_Array(1 .. N);
  begin
    for I in 1 .. N loop
      Get(A(I));
    end loop;
    Put (Workbook(A, K), 0);
    New_Line;
  end;
end Solution;
