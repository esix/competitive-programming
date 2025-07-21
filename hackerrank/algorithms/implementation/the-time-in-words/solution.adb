with Ada.Text_IO; use Ada.Text_IO;
with Ada.Integer_Text_IO; use Ada.Integer_Text_IO;
with Ada.Strings.Unbounded; use Ada.Strings.Unbounded;
with Ada.Strings.Unbounded.Text_IO; use Ada.Strings.Unbounded.Text_IO;

procedure Solution is

   function Time_In_Words(H : Integer; M : Integer) return Unbounded_String is
      type Number_Array is array (Natural range <>) of Unbounded_String;
     
      N0_19 : constant Number_Array := (
         Null_Unbounded_String, 
         To_Unbounded_String("one"), 
         To_Unbounded_String("two"), 
         To_Unbounded_String("three"), 
         To_Unbounded_String("four"), 
         To_Unbounded_String("five"), 
         To_Unbounded_String("six"), 
         To_Unbounded_String("seven"), 
         To_Unbounded_String("eight"), 
         To_Unbounded_String("nine"),
         To_Unbounded_String("ten"), 
         To_Unbounded_String("eleven"), 
         To_Unbounded_String("twelve"), 
         To_Unbounded_String("thirteen"), 
         To_Unbounded_String("fourteen"), 
         To_Unbounded_String("quarter"), 
         To_Unbounded_String("sixteen"), 
         To_Unbounded_String("seventeen"), 
         To_Unbounded_String("eighteen"), 
         To_Unbounded_String("nineteen")
      );
     
      Numbers : Number_Array(0..30);
     
      function Make_Tens(Prefix : Unbounded_String) return Number_Array is
         Result : Number_Array(0..9);
      begin
         Result(0) := Prefix;
         for I in 1..9 loop
            Result(I) := Prefix & " " & N0_19(I);
         end loop;
         return Result;
      end Make_Tens;
     
      Twenty_Tens : constant Number_Array := Make_Tens(To_Unbounded_String("twenty"));
     
   begin
      Numbers(0..19) := N0_19(0..19);
      Numbers(20..29) := Twenty_Tens(0..9);
      Numbers(30) := To_Unbounded_String("half");
      
      if M = 0 then
         return Numbers(H) & " o' clock";
      elsif M = 15 then
         return To_Unbounded_String("quarter past ") & Numbers(H);
      elsif M = 30 then
         return To_Unbounded_String("half past ") & Numbers(H);
      elsif M = 45 then
         return To_Unbounded_String("quarter to ") & Numbers(H + 1);
      elsif M <= 30 then
         if M = 1 or M = 59 then
            return Numbers(M) & " minute past " & Numbers(H);
         else
            return Numbers(M) & " minutes past " & Numbers(H);
         end if;
      else
         if (60 - M) = 1 then
            return Numbers(60 - M) & " minute to " & Numbers(H + 1);
         else
            return Numbers(60 - M) & " minutes to " & Numbers(H + 1);
         end if;
      end if;
   end Time_In_Words;

   H, M : Integer;
   Result : Unbounded_String;

begin
   Get (H);
   Skip_Line;
   Get (M);
   Result := Time_In_Words(H, M);
   Put_Line(To_String(Result));
end Solution;
