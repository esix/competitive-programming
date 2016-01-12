var
  input, output: Text;
  a, b, c: integer;

begin
  assign(input, 'input.txt');
  reset(input);
  assign(output, 'output.txt');
  rewrite(output);
  readln(input, a, b, c);
  if a * b = c then
    writeln(output, 'YES')
  else
    writeln(output, 'NO');
  close(input);
  close(output);
end.
