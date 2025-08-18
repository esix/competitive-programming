with Ada.Text_IO; use Ada.Text_IO;
with Ada.Integer_Text_IO; use Ada.Integer_Text_IO;

procedure Solution is
   s1 : constant String := Get_Line;
   s2 : constant String := Get_Line;
   n : constant Natural := s1'Length;

   type Int_Array is array (Natural range <>) of Integer;
   dp : Int_Array(0 .. n) := (others => 0);

   prev_temp : Integer;
   current_prev : Integer;
begin
   for i in 1 .. n loop
      current_prev := 0;
      for j in 1 .. n loop
         prev_temp := dp(j);
         if s1(i) = s2(j) then
            dp(j) := current_prev + 1;
         else
            if dp(j) < dp(j-1) then
               dp(j) := dp(j-1);
            else
               dp(j) := dp(j);
            end if;
         end if;
         current_prev := prev_temp;
      end loop;
   end loop;
   Put(dp(n), 0);
end Solution;
