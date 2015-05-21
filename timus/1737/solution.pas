var
 n : integer;


procedure printS(s:string; n : integer );
var i, m : integer;
begin
  for i := 0 to n-1 do
   write( s[i mod 3+1] );
  writeln;
end;

begin
readln(n);
if 6*n > 100000 then writeln('TOO LONG')
else begin
 printS('abc',n);
 if n>1 then printS('acb',n);
 printS('bac',n);
 if n > 1 then printS('bca',n);
 printS('cab',n);
 if n > 1 then printS('cba',n);

end;
end.