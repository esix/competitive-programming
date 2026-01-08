with Ada.Text_IO; use Ada.Text_IO;
with Ada.Integer_Text_IO; use Ada.Integer_Text_IO;

procedure Solution is
   T : Integer;
   
   function Check(S : String; L, R : Integer) return Boolean is
      I : Integer := L;
      J : Integer := R;
   begin
      while I < J loop
         if S(I) /= S(J) then return False; end if;
         I := I + 1; J := J - 1;
      end loop;
      return True;
   end Check;
   
   function Find(S : String) return Integer is
      L : Integer := S'First;
      R : Integer := S'Last;
   begin
      while L < R and then S(L) = S(R) loop
         L := L + 1; R := R - 1;
      end loop;
      if L >= R then 
         return -1; 
      end if;
      if Check(S, L + 1, R) then 
         return L - S'First; 
      end if;
      if Check(S, L, R - 1) then 
         return R - S'First; 
      end if;
      return -2;
   end Find;

begin
   Get(T); Skip_Line;
   for K in 1..T loop
      declare
         Buf : String(1..200005);
         I : Natural := 1;
         J : Natural;
         S : String(1..200005);
         Sz : Natural := 0;
      begin
         Get_Line(Buf, J);
         for X in I..J loop
            Sz := Sz + 1; 
            S(Sz) := Buf(X); 
         end loop;
         if Sz = 0 then 
            Put(-1, 0); 
         else 
            Put(Find(S(1..Sz)), 0); 
         end if;
         New_Line;
      end;
   end loop;
end Solution;
