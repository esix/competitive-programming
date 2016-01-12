var
  input, output: Text;
  n, i, maxIndex, minIndex: Integer;
  p, s: Longint;
  a: array[1..100] of Integer;

begin
  assign(input, 'input.txt');
  reset(input);
  assign(output, 'output.txt');
  rewrite(output);

  readln(input, n);
  maxIndex := 1;
  minIndex := 1;
  s := 0;

  for i := 1 to n do begin
    read(input, a[i]);
    if a[i] > a[maxIndex] then maxIndex := i;
    if a[i] < a[minIndex] then minIndex := i;
    if a[i] > 0 then s := s + a[i];
  end;

  p := 1;
  if maxIndex < minIndex then begin
    i := maxIndex;
    maxIndex := minIndex;
    minIndex := i;
  end;

  for i := minIndex + 1 to maxIndex - 1 do
    p := p * a[i];

  writeln(output, s, ' ', p);



  close(input);
  close(output);
end.
