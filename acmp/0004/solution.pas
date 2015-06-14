var
  input, output: Text;
  k: Longint;

begin
  assign(input, 'input.txt');
  reset(input);
  assign(output, 'output.txt');
  rewrite(output);

  readln(input, k);
  writeln(output, k:0, 9:0, 9-k:0);

  close(input);
  close(output);
end.
