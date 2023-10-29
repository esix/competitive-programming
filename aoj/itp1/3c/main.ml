let solve a b = 
  if a < b then Printf.printf "%i %i\n" a b 
  else Printf.printf "%i %i\n" b a in 
let rec case i = 
  Scanf.scanf "%i %i\n" (fun a b ->
    if a == 0 && b == 0 then ()
    else begin
      solve a b;
      case (i+1)
    end) in
case 1
