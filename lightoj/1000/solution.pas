program lightoj1000(input, output);

var
  n: Integer;
  a, b: Integer;
  i: Integer;

begin
  readln(n);

  for i := 1 to n do begin
    readln(a, b);
    writeln('Case ', i, ': ', a + b);
  end;
end.
