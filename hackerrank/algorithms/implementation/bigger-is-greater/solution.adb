with Ada.Text_IO; use Ada.Text_IO;
with Ada.Integer_Text_IO; use Ada.Integer_Text_IO;
with Ada.Environment_Variables;

procedure Solution is
    t, n : Integer;
    w : string (1..101);
    F : File_Type;

    procedure solve is
        i, j : Integer; 
        temp : Character;
    begin
        i := n;
        if i > 1 then 
            while w (i - 1) >= w (i) loop
                i := i - 1;
                exit when i = 1;
            end loop;
        end if; 

        if i = 1 then
            Put_Line (F, "no answer");
            return;
        end if;

        j := n;
        while w (j) <= w (i - 1) loop
            j := j - 1;
        end loop;

        temp := w (i - 1);
        w (i - 1) := w (j);
        w (j) := temp;

        j := n; 
        while i < j loop 
            temp := w (i);
            w (i) := w (j);
            w (j) := temp;
            i := i + 1;
            j := j - 1;
        end loop;

        for i in 1 .. n loop
            Put ( F, w (i) );
        end loop;
        Put (F, ASCII.LF);
    end solve;

begin
    Get (t);
    Skip_Line;

    Create (F, Out_File, Ada.Environment_Variables.Value (Name => "OUTPUT_PATH"));
    -- Normally it works when just print to STDOUT 
    -- but in this case there are large IO

    for i in 1 .. t loop
        Get_Line (w, n);
        solve;
    end loop;
end Solution;
