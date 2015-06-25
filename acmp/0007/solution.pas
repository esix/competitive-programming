var
  input, output: Text;
  s, s1, s2, s3: String;
  i1, i2: Integer;

function gt(s1: String; s2: String): Boolean;
var i : integer;
begin
  if length(s1) > length(s2) then begin
    gt := true;
    exit;
  end;

  if length(s1) < length(s2) then begin
    gt := false;
    exit;
  end;

  for i := 1 to length(s1) do begin
    if Ord(s1[i]) > Ord(s2[i]) then begin
      gt := true;
      exit;
    end;
    if Ord(s1[i]) < Ord(s2[i]) then begin
      gt := false;
      exit;
    end;
  end;
  gt := false;
end;

begin
  assign(input, 'input.txt');
  reset(input);
  assign(output, 'output.txt');
  rewrite(output);

  readln(input, s);
  i1 := Pos(' ', s);
  i2 := Pos(' ', Copy(s, i1+1, length(s) - i1)) + i1;
  s1 := Copy(s, 1, i1-1);
  s2 := Copy(s, i1+1, i2-i1-1);
  s3 := Copy(s, i2+1, length(s) - i2);

  if gt(s1, s2) and gt(s1, s3) then
    writeln(output, s1)
  else if gt(s2, s3) then
    writeln(output, s2)
  else
    writeln(output, s3);

  close(input);
  close(output);
end.
