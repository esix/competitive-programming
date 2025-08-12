with Ada.Text_IO; use Ada.Text_IO;

procedure Solution is
   Str : String (1..100);
   Length : Integer;
   L : Integer := 0;
begin
   Get_Line(Str, Length);
   
   for I in 1..Length loop
      if L > 0 and then Str(L) = Str(I) then
         L := L - 1;
      else
         L := L + 1;
         Str(L) := Str(I);
      end if;
   end loop;
   
   if L = 0 then
      Put_Line("Empty String");
   else
      Put_Line(Str(1..L));
   end if;
end Solution;
