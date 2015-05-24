program lightoj1368(input, output);

const
  MAX_SIZE = 100;
  SQ1 = PI / 4;
  SQ2 = 4 - PI / 2;

{ GLOBALS }
var
  r, c: integer;
  l: array [1..MAX_SIZE] of string[MAX_SIZE];
  ps: array[1..MAX_SIZE*MAX_SIZE] of integer;

function is_zero_square(y, x: integer): boolean;
begin
  is_zero_square := (y + x) mod 2 = 1;
end;


function count_square(y, x: integer): double;
var
  visited: array [1..MAX_SIZE, 1..MAX_SIZE] of boolean;
  i, j, row, col: integer;
  p_size: integer;
  res: double;
begin
  if is_zero_square(y, x) then begin
    count_square := 0;
    exit;
  end;
  for i := 1 to R do
    for j := 1 to C do
      visited[i, j] := false;

  res := 0;
  p_size := 1;
  ps[1] := (y shl 16) or x;
  writeln(p_size);

  while p_size > 0 do begin
    for i := 1 to p_size do begin
      y := ps[i] shr 16;
      x := ps[i] and $ffff;

    end;
    p_size := 0;

  end;
  count_square := 1;
end;



var
  t_count, t, i, q_count: integer;
  y, x: integer;
  s: double;

begin
  readln(input, t_count);

  for t := 1 to t_count do begin
    readln(r, c);
    writeln('Case ', t, ':');

    for i := 1 to r do readln(l[i]);
    readln(q_count);
    for i := 1 to q_count do begin
      readln(y, x);
      s := count_square(y, x);
      writeln(s);
    end;
  end;
end.
