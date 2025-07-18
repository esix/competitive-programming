with Ada.Text_IO; use Ada.Text_IO;
with Ada.Integer_Text_IO; use Ada.Integer_Text_IO;


procedure Solution is

   function Chocolate_Fest(N, C, M : Integer) return Integer is
      R : Integer := N / C;
      W : Integer := N / C;
      E : Integer;
   begin
      while W >= M loop
         E := W / M;
         R := R + E;
         W := (W mod M) + E;
      end loop;
      return R;
   end Chocolate_Fest;


   T, N, C, M, Result : Integer;

begin
   Get (T);

   for Test_Case in 1 .. T loop
      Skip_Line;
      Get (N);
      Get (C);
      Get (M);
      Result := Chocolate_Fest (N, C, M);
      Put (Result, 0);
      New_Line;
   end loop;

end Solution;
