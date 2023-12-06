let s = read_line ();;
let p = read_line ();;

let contains s1 s2 =
  try
    let len = String.length s2 in
    for i = 0 to String.length s1 - len do
      if String.sub s1 i len = s2 then raise Exit
    done;
    false
  with Exit -> true;;

if contains (s ^ s) p then 
  print_endline "Yes" 
else 
  print_endline "No"
