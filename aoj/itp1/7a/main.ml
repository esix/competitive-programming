let solve = function
  | (-1, _, _) -> 'F'
  | (_, -1, _) -> 'F'
  | (m, f, _) when m + f >= 80  -> 'A' 
  | (m, f, _) when m + f >= 65  -> 'B' 
  | (m, f, _) when m + f >= 50  -> 'C'
  | (_, _, r) when r >= 50  -> 'C'
  | (m, f, _) when m + f >= 30  -> 'D' 
  | _ -> 'F' in
let rec next_dataset () = 
  Scanf.scanf "%i %i %i\n" (fun m r f -> 
    if m != -1 || r != -1 || f != -1 then 
    begin
      Printf.printf "%c\n" (solve (m, r, f));
      next_dataset ();
    end) in
next_dataset ()
