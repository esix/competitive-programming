let explode_string s =
  let rec exp i l =
    if i < 0 then l else exp (i - 1) (s.[i] :: l) in
  exp (String.length s - 1) [] 
in

let rec sum l =
  match l with
  | [] -> 0
  | h::t -> h + (sum t) 
in

let digits_of_string s = 
  List.map (fun c -> (Char.code c) - (Char.code '0')) (explode_string s) 
in

let solve s = sum (digits_of_string s) 
in

let rec dataset () = 
  let line = read_line () in
    if line <> "0" then begin
      print_int (solve line);
      print_endline "";
      dataset ();
    end 
in

dataset ()
