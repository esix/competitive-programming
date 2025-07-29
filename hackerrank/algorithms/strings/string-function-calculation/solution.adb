with Ada.Text_IO; use Ada.Text_IO;
with Ada.Integer_Text_IO; use Ada.Integer_Text_IO;
with Ada.Unchecked_Deallocation;

procedure Solution is
   MAX_LEN: constant := 100000;
   MAX_STATES: constant := 200000;
   
   type Char_Array is array (Character range 'a'..'z') of Integer;
   type State_Record is record
      len, link: Integer;
      next: Char_Array;
   end record;
   
   type State_Array is array (0..MAX_STATES-1) of State_Record;
   type State_Array_Access is access State_Array;
   
   type Count_Array is array (0..MAX_STATES-1) of Integer;
   type Count_Array_Access is access Count_Array;
   
   type Head_Bucket_Array is array (0..MAX_LEN) of Integer;
   type Head_Bucket_Array_Access is access Head_Bucket_Array;
   
   type Next_Bucket_Array is array (0..MAX_STATES-1) of Integer;
   type Next_Bucket_Array_Access is access Next_Bucket_Array;
   
   states_ptr: State_Array_Access;
   cnt_ptr: Count_Array_Access;
   head_bucket_ptr: Head_Bucket_Array_Access;
   next_bucket_ptr: Next_Bucket_Array_Access;
   
   last, size: Integer;
   T: String (1..MAX_LEN);
   L: Natural;
   ans: Integer := 0;
begin
   states_ptr := new State_Array;
   cnt_ptr := new Count_Array'(others => 0);
   head_bucket_ptr := new Head_Bucket_Array'(others => -1);
   next_bucket_ptr := new Next_Bucket_Array;
   
   Get_Line(T, L);
   
   states_ptr(0).len := 0;
   states_ptr(0).link := -1;
   for c in Character range 'a'..'z' loop
      states_ptr(0).next(c) := -1;
   end loop;
   last := 0;
   size := 1;
   
   for idx in 1..L loop
      declare
         c: Character := T(idx);
         cur: constant Integer := size;
         p: Integer := last;
      begin
         size := size + 1;
         
         states_ptr(cur).len := states_ptr(last).len + 1;
         cnt_ptr(cur) := 1;
         for ch in Character range 'a'..'z' loop
            states_ptr(cur).next(ch) := -1;
         end loop;
         
         while p >= 0 and then states_ptr(p).next(c) = -1 loop
            states_ptr(p).next(c) := cur;
            p := states_ptr(p).link;
         end loop;
         
         if p < 0 then
            states_ptr(cur).link := 0;
         else
            declare
               q: constant Integer := states_ptr(p).next(c);
            begin
               if states_ptr(p).len + 1 = states_ptr(q).len then
                  states_ptr(cur).link := q;
               else
                  declare
                     clone: constant Integer := size;
                  begin
                     size := size + 1;
                     states_ptr(clone) := states_ptr(q);
                     states_ptr(clone).len := states_ptr(p).len + 1;
                     states_ptr(clone).link := states_ptr(q).link;
                     states_ptr(q).link := clone;
                     states_ptr(cur).link := clone;
                     cnt_ptr(clone) := 0;
                     
                     while p >= 0 and then states_ptr(p).next(c) = q loop
                        states_ptr(p).next(c) := clone;
                        p := states_ptr(p).link;
                     end loop;
                  end;
               end if;
            end;
         end if;
         last := cur;
      end;
   end loop;
   
   declare
      max_len: Integer := states_ptr(last).len;
   begin
      next_bucket_ptr.all := (others => -1);
      
      for i in 0..size-1 loop
         if states_ptr(i).len <= max_len then
            next_bucket_ptr(i) := head_bucket_ptr(states_ptr(i).len);
            head_bucket_ptr(states_ptr(i).len) := i;
         end if;
      end loop;
      
      for len_val in reverse 0..max_len loop
         declare
            i: Integer := head_bucket_ptr(len_val);
         begin
            while i /= -1 loop
               if states_ptr(i).link >= 0 then
                  cnt_ptr(states_ptr(i).link) := cnt_ptr(states_ptr(i).link) + cnt_ptr(i);
               end if;
               i := next_bucket_ptr(i);
            end loop;
         end;
      end loop;
   end;
   
   for i in 0..size-1 loop
      if states_ptr(i).len * cnt_ptr(i) > ans then
         ans := states_ptr(i).len * cnt_ptr(i);
      end if;
   end loop;
   
   Put(ans, 0);
   New_Line;
end Solution;
