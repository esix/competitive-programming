var
  input, output: Text;
  n: integer;

begin
  assign(input, 'input.txt');
  reset(input);
  assign(output, 'output.txt');
  rewrite(output);
  readln(input, n);
  writeln(output, (1 + n) / 2 * (abs(n-1)+1):0:0);
  close(input);
  close(output);
end.
