With Ada.Text_IO; Use Ada.Text_IO;
With Ada.Integer_Text_IO; Use Ada.Integer_Text_IO;
with Ada.Strings.Unbounded; use Ada.Strings.Unbounded;
with Ada.Strings.Unbounded.Text_IO; use Ada.Strings.Unbounded.Text_IO;

procedure main is
  
  function Reverse_Str (Item : String) return String is
    Result : String (Item'Range);
  begin
    for I in Item'range loop
      Result (Result'Last - I + Item'First) := Item (I);
    end loop;
    return Result;
  end Reverse_Str;

  function Reverse_Int (Item : Integer) return Integer is
    Item_Str : String := Reverse_Str(Integer'Image(Item));
  begin
    return Integer'Value(Item_Str);
  end Reverse_Int;


  n : Integer;

begin
  get(n);

  for i in 1..n loop
    declare
      A : Integer;
      B : Integer;
    begin
      get(A);
      get(B);

      declare
        a_rev: Integer := Reverse_Int(a);
        b_rev: Integer := Reverse_Int(b);
        c_rev: Integer := a_rev + b_rev;
      begin
        put(Reverse_Int(c_rev));
        new_line;
      end;
    end;
  end loop;

end main;
