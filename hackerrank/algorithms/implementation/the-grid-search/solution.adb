with Ada.Text_IO; use Ada.Text_IO;
with Ada.Integer_Text_IO; use Ada.Integer_Text_IO;


procedure Solution is
  type Char_Matrix is array (Positive range <>, Positive range <>) of Character;
   

   function Read_Matrix return Char_Matrix is
      R, C : Positive;
   begin
      Skip_Line; 
      Get(R);
      Get(C);
      
      declare
         Matrix : Char_Matrix(1..R, 1..C);
      begin
         for I in 1..R loop
            Skip_Line;
            for J in 1..C loop
               Get(Matrix(I, J));
            end loop;
         end loop;
         return Matrix;
      end;
   end Read_Matrix;


   procedure Print_Matrix(Matrix : Char_Matrix) is
   begin
      Put_Line("Matrix " & 
               Integer'Image(Matrix'Length(1)) & " x" & 
               Integer'Image(Matrix'Length(2)) & ":");
               
      for I in Matrix'Range(1) loop
         for J in Matrix'Range(2) loop
            Put(Matrix(I, J));
         end loop;
         New_Line;
      end loop;
      New_Line;
   end Print_Matrix;


   function Grid_Search(G : Char_Matrix; P : Char_Matrix) return String is
      Match : Boolean := True;
   begin
      for I in G'First(1)..G'Last(1) - P'Length(1) + 1 loop
         for J in G'First(2)..G'Last(2) - P'Length(2) + 1 loop
            Match := True;
         
            for K in P'Range(1) loop
               for L in P'Range(2) loop
                  if G(I+K-1, J+L-1) /= P(K, L) then
                     Match := False;
                     exit;
                  end if;
               end loop;
               exit when not Match;
            end loop;
         
            if Match then
               return "YES";
            end if;
         end loop;
      end loop;
   
      return "NO";
   end Grid_Search;


   procedure Run_Test_Case is
      G : Char_Matrix := Read_Matrix; 
      P : Char_Matrix := Read_Matrix; 
   begin
      -- Print_Matrix(G);
      -- Print_Matrix(P);
      Put_Line(Grid_Search(G, P));
   end Run_Test_Case;


   T : Integer;

begin
   Get(T);

   for Test_Case in 1 .. T loop
      Run_Test_Case;
   end loop;

end Solution;
