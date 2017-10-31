var
  t, i: integer;
  r: double;
  s: double;
  mypi: double;

begin
  readln(t);
  for i := 1 to t do begin
    readln(r);
    s := (4 - PI)*r*r;
    writeln('Case ', i, ': ', s:0:2);
  end;
end.

