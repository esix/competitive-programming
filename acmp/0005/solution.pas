var
  input, output: Text;
  n, i, evenNum, oddNum: Integer;
  a: array[1..100] of Integer;

begin
  assign(input, 'input.txt');
  reset(input);
  assign(output, 'output.txt');
  rewrite(output);

  readln(input, n);
  for i := 1 to n do
    read(input, a[i]);

  for i := 1 to n do
    if a[i] mod 2 = 1 then begin
      write(output, a[i], ' ');
      Inc(oddNum);
    end;

  writeln(output);

  for i := 1 to n do
    if a[i] mod 2 = 0 then begin
      write(output, a[i], ' ');
      Inc(evenNum);
    end;

  writeln(output);

  if oddNum <= evenNum then
    writeln(output, 'YES')
  else
    writeln(output, 'NO');

  close(input);
  close(output);
end.
