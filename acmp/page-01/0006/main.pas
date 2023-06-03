var
  input, output: Text;
  s: String;
 
function isValidCol(c:char): boolean;
begin
  isValidCol := c in ['A'..'H'];
end;
 
function isValidRow(c: char): boolean;
begin
  isValidRow := c in ['1'..'8'];
end;
 
begin
  assign(input, 'input.txt');
  reset(input);
  assign(output, 'output.txt');
  rewrite(output);
 
  readln(input, s);
 
  if (length(s) = 5) and
     isValidCol(s[1]) and
     isValidRow(s[2]) and
     (s[3] = '-') and
     isValidCol(s[4]) and
     isValidRow(s[5]) then
    begin
      if (abs(ord(s[1]) - ord(s[4])) * abs(ord(s[2])-ord(s[5])) = 2) then
        writeln(output, 'YES')
      else
        writeln(output, 'NO')
    end
  else
    writeln(output, 'ERROR');
 
  close(input);
  close(output);
end.
