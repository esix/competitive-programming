const
 a : array[1..9] of integer = (0,0,0,0,0,0,0,0,0);
var
 N : int64;
 d : integer;

begin
  readln(N);

  if N = 0 then begin
    writeln('10');
    exit;
  end;
  if N = 1 then begin
    writeln('1');
    exit;
  end;
  for d := 9 downto 2 do
    while( N mod d = 0) do begin
      N := N div d;
      inc( a[d] );
    end;
  if N >= 10 then begin
    writeln('-1');
    exit;
  end;

  for d := 2 to 9 do
    while a[d] > 0 do begin
      write(d);
      dec( a[d] );
    end;
  writeln;
end.