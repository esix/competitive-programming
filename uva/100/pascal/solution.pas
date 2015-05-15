program uva100(input, output);
const
  MAX_MEMO = 65536;

var
  memoized: array[0..MAX_MEMO] of Integer;
  res: LongInt;

function CountSeqLen(n: LongInt): Integer;
var
  res: Integer;
begin
  if n = 1 then
    res := 1

  else if (n <= MAX_MEMO) and (memoized[n] <> 0) then
    res := memoized[n]

  else begin
    if n and 1 = 1 then
      res := 1 + CountSeqLen(3 * n + 1)
    else
      res := 1 + CountSeqLen(n div 2);

    if n <= MAX_MEMO then memoized[n] := res;
  end;

  CountSeqLen := res;
end;



procedure swap(var i: LongInt; var k: LongInt);
var
  tmp: LongInt;
begin
  tmp := i;
  i := k;
  k := tmp;
end;

var
  i, k, origI, origK : LongInt;
  j: LongInt;
  max, r: Integer;


begin
  memoized[1] := 1;

  While not eof(input) do begin
    readln(origI, origK);
    i := origI; k := origK;
    if i > k then swap(i,k);
    max := 0;
    for j := i to k do begin
      res := CountSeqLen(j);
      if res > max then max := res;
    end;
    writeln(origI, ' ', origK, ' ', max);
  end;
end.
