uses SysUtils;

var
  input, output: Text;
  s: String;
  l: Longint;

begin
  assign(input, 'input.txt');
  reset(input);
  assign(output, 'output.txt');
  rewrite(output);

  readln(input, s);
  if length(s) > 1 then begin
    l := StrToInt(copy(s,1, length(s) - 1));
    write(output, l * (l+1));
  end;
  writeln(output, 25);

  close(input);
  close(output);
end.
