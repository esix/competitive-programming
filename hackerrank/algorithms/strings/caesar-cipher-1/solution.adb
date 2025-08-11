with Ada.Text_IO; use Ada.Text_IO;
with Ada.Integer_Text_IO; use Ada.Integer_Text_IO;

procedure Solution is
   n, k : Integer;
   
   function Shift_Char(c : Character; k_rot : Integer) return Character is
      base : Character;
      current_index : Integer;
      shift_amount : Integer := k_rot mod 26;
   begin
      if c in 'a' .. 'z' then
         base := 'a';
      elsif c in 'A' .. 'Z' then
         base := 'A';
      else
         return c;
      end if;
      
      current_index := Character'Pos(c) - Character'Pos(base);
      current_index := (current_index + shift_amount) mod 26;
      return Character'Val(Character'Pos(base) + current_index);
   end Shift_Char;

begin
   Get(n);
   Skip_Line;
   
   declare
      s : String(1..n);
      Last : Natural;
      Result : String(1..n);
   begin
      Get_Line(s, Last);
      Skip_Line;

      Get(k);
      
      for i in 1..Last loop
         Result(i) := Shift_Char(s(i), k);
      end loop;
      
      Put_Line(Result(1..Last));
   end;
end Solution;
