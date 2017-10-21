uses
  math;

var
  input, output: Text;
  n, i : integer;
  sum, sump, sumpp, v, vp, vpp: longint;

begin
  assign(input, 'input.txt');
  reset(input);
  assign(output, 'output.txt');
  rewrite(output);

  readln(input, n);

  if n = 1 then
    sum := 0
  else if n = 2 then
    begin
      read(input, vp, v);
      sum := abs(vp-v);
    end
  else
    begin
      read(input, vpp, vp);
      sumpp := 0;
      sump := abs(vp - vpp);

      for i := 3 to n do
        begin
          read(input, v);
          //writeln(vpp, ' ', vp, ' ', v);

          sum := min(sumpp + 3 * abs(v - vpp), sump + abs(v - vp));
          //writeln(sumpp, ' ', sump, ' ', sum);

          vpp := vp;
          vp := v;
          sumpp := sump;
          sump := sum;
        end;
    end;

  write(output, sum);
  write(sum);

  close(input);
  close(output);
end.
