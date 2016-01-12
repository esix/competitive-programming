var
  input, output: Text;
  w, h, n, i, x1, y1, x2, y2, x, y, sum: integer;
  a : array[0..100,0..100] of byte;

begin
  assign(input, 'input.txt');
  reset(input);
  assign(output, 'output.txt');
  rewrite(output);
  readln(input, w, h);
  for y := 0 to h-1 do
    for x := 0 to w-1 do
      a[y,x] := 1;

  readln(input, n);

  for i := 1 to n do
    begin
      readln(input, x1, y1, x2, y2);
      for y := y1 to y2-1 do
        for x := x1 to x2-1 do
          a[y,x] := 0;
    end;

  sum := 0;
  for y := 0 to h-1 do
    begin
      for x := 0 to w-1 do
        begin
          sum := sum + a[y,x];
          //write(a[y,x], ' ');
        end;
      //writeln;
    end;

  write(output, sum);
  write(sum);

  close(input);
  close(output);
end.
