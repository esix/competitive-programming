with Ada.Text_IO; use Ada.Text_IO;
with Ada.Integer_Text_IO; use Ada.Integer_Text_IO;
with Ada.Strings; use Ada.Strings;

procedure Solution is
    m, n, r, level : Integer;
    left, top, right, bottom, nn, mm, count, idx, idx2, ii, jj : Integer;
    type TLine is array (0..301) of Integer;
    matrix : array (0..301) of TLine;

begin
    Get (n);
    Get (m);
    Get (r);
    Skip_Line;

    for i in 0 .. n-1 loop
        for j in 0 .. m-1 loop
            Get (matrix (i) (j));
        end loop;
        if i < n - 1 then
            Skip_Line;
        end if;
    end loop;

    for i in 0 .. n-1 loop
        for j in 0 .. m-1 loop
            level := Integer'Min (Integer'Min (i, j), Integer'Min (n - i - 1, m - j - 1));
            left := level;
            top := level;
            right := m - level - 1;
            bottom := n - level - 1;
            nn := n - 2 * level;
            mm := m - 2 * level;
            count := 2 * nn + 2 * mm - 4;
            if level = i or level = m - j - 1 then
                idx := (i - level) + (j - level);
            else
                idx := count / 2 + (m - j - 1 - level) + (n - i - 1 - level);
            end if;
            idx2 := (idx + r) mod count;

            if idx2 < mm then
                ii := top; 
                jj := left + idx2;
            elsif idx2 < mm + nn - 1 then
                ii := top + (idx2 - mm + 1); 
                jj := right;
            elsif idx2 < mm + nn + mm - 2 then
                ii := bottom;
                jj := right - (idx2 - mm - nn + 2);
            else
                ii := bottom - (idx2 - mm - nn - mm) - 3;
                jj := left; 
            end if;

            Put (matrix (ii) (jj), 0);
            Put (' ');
        end loop;
        New_Line;
    end loop;

end Solution;
