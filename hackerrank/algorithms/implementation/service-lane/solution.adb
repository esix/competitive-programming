with Ada.Text_IO; use Ada.Text_IO;
with Ada.Integer_Text_IO; use Ada.Integer_Text_IO; 
use Ada;

procedure Solution is
   type Width_Array is array (0..100000) of Integer;
   type Case_Array is array (1..1000) of Integer;
   
   N, T : Integer;
   Widths : Width_Array;
   Cases_I, Cases_J : Case_Array;
   
begin
   Get (N); 
   Get (T);
   
   for I in 0..N-1 loop
      Get (Widths(I));
   end loop;
   
   for K in 1..T loop
      Get (Cases_I(K));
      Get (Cases_J(K));
   end loop;
   
   for K in 1..T loop
      declare
         I : Integer := Cases_I(K);
         J : Integer := Cases_J(K);
         Min_Width : Integer := Widths(I);
      begin
         for X in I+1..J loop
            if Widths(X) < Min_Width then
               Min_Width := Widths(X);
            end if;
         end loop;
         
         Put (Min_Width, 0);
         New_Line;
      end;
   end loop;
end Solution;
