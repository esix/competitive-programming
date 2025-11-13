program Main;

type
  TStringArray = array of String;
  TIntegerArray = array of Integer;

var
  n, m, i, j, v: Integer;
  cost: TIntegerArray;
  path: TStringArray;

begin
  read(n, m);
  SetLength(cost, m);
  SetLength(path, m);


  for i := 0 to n - 1 do
    for j := 0 to m - 1 do
      begin
        read(v);
        if (i = 0) and (j = 0) then
          begin
            cost[j] := v;
            path[j] := '';
          end
        else if i = 0 then
          begin
            cost[j] := cost[j - 1] + v;
            path[j] := path[j - 1] + ' R';
          end
        else if j = 0 then
          begin
            cost[j] := cost[j] + v;
            path[j] := path[j] + ' D';
          end
        else if cost[j] > cost[j - 1] then
          begin
            cost[j] := cost[j] + v;
            path[j] := path[j] + ' D';
          end
        else
          begin
            cost[j] := cost[j - 1] + v;
            path[j] := path[j - 1] + ' R';
          end
      end;

  writeln(cost[m - 1]);
  writeln(copy(path[m - 1], 2));
end.
