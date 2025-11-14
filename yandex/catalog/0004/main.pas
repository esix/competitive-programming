program Main;

type
  TIntegerArray = array of Longint;
  PIntegerArray = ^TIntegerArray;

var
  linePP, lineP, line: PIntegerArray;
  n, m, i, j: Integer;
  v: Longint;

procedure turn;
var
  temp: PIntegerArray;
begin
  temp := linePP;
  linePP := lineP;
  lineP := line;
  line := temp;
end;

begin
  read(n, m);
  New(linePP);
  New(lineP);
  New(line);
  SetLength(linePP^, m);
  SetLength(lineP^, m);
  SetLength(line^, m);

  line^[0] := 1;
  FillChar(line^[1], SizeOf(Integer) * (m - 1), 0);

  for i := 1 to n - 1 do
    begin
      turn;
      for j := 0 to m - 1 do
        begin
          v := 0;
          if j >= 2 then v := v + lineP^[j - 2];
          { if j <= m - 3 then v := v + lineP^[j + 2]; }
          if (i > 1) and (j >= 1) then v := v + linePP^[j - 1];
          { if (i > 1) and (j <= m - 2) then v := v + linePP^[j + 1]; }
          line^[j] := v;
        end;
    end;

  writeln(line^[m - 1]);
end.
