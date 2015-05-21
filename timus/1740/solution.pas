var
   k,h,l, res : extended;
begin

  readln(l,k,h);
  res := l/k;

  if abs( res-round(res) ) < 1e-5 then
    writeln( round(res)*h, ' ', round(res)*h)
  else
    writeln( trunc(res)*h, ' ', trunc(res+1)*h);
end.