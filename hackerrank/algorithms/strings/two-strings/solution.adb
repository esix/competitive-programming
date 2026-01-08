with Ada.Text_IO; use Ada.Text_IO;
with Ada.Integer_Text_IO; use Ada.Integer_Text_IO;

procedure Solution is
   T : Integer;
   Found : Boolean;
   Count : array(Character) of Boolean;
   
   function HasCommonSubstring(A, B : String) return Boolean is
   begin
      for C in Character loop
         Count(C) := False;
      end loop;
      
      for I in A'Range loop
         Count(A(I)) := True;
      end loop;
      
      for I in B'Range loop
         if Count(B(I)) then
            return True;
         end if;
      end loop;
      
      return False;
   end HasCommonSubstring;
   
   A_Line, B_Line : String(1..100001);
   A_Len, B_Len : Natural;
begin
   Get(T);
   
   Skip_Line;
   
   for Test in 1..T loop
      Get_Line(A_Line, A_Len);
      Get_Line(B_Line, B_Len);
      
      Found := HasCommonSubstring(A_Line(1..A_Len), B_Line(1..B_Len));
      
      if Found then
         Put_Line("YES");
      else
         Put_Line("NO");
      end if;
   end loop;
end Solution;
