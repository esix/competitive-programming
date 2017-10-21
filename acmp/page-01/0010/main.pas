var
  input, output: Text;
  a, b, c, d: Integer;
  x: Integer;

begin
  assign(input, 'input.txt');
  reset(input);
  assign(output, 'output.txt');
  rewrite(output);

  readln(input, a, b, c, d);
  for x := -100 to 100 do
    if a*x*x*x + b*x*x + c*x + d = 0 then
      write(output, x, ' ');

  close(input);
  close(output);
end.
