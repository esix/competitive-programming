With Ada.Text_IO; Use Ada.Text_IO;
With Ada.Integer_Text_IO; Use Ada.Integer_Text_IO;

procedure main is

  n : Integer;
  Line : String := Ada.Text_IO.Get_Line;

begin
  n := Integer'Value(Line);

  for i in 1..n loop
    declare
      Line : String := Ada.Text_IO.Get_Line;
      Length : constant Natural := Line'Size / 8;
    begin
      for i in 1 .. Length/2 loop
        if i mod 2 = 1 then
          put( line(i) );
        end if;
      end loop;
      new_line;
    end;
  end loop;

end main;
