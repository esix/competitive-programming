let rec case i = 
  let a = read_int() in
  if a == 0 then ()
  else begin
    Printf.printf "Case %i: %i\n" i a;
    case (i+1)
  end in
case 1
