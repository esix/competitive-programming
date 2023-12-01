let explode_string s =
  let rec exp i l =
    if i < 0 then l else exp (i - 1) (s.[i] :: l) in
  exp (String.length s - 1) [];;
  
module Char_tbl = Hashtbl.Make(struct
      type t = char
      let equal = (==)
      let hash = Hashtbl.hash
    end);;

let counts = Char_tbl.create 16;;


let rec register_char ch = 
  let c = Char.lowercase ch in
  let count_c =
    try
      Char_tbl.find counts c
    with Not_found -> 0 in
  Char_tbl.replace counts c (count_c + 1);;


let rec count_chars seq =
  match seq with
  | [] -> ()
  | h :: t -> begin
    register_char h;
    count_chars t;
  end;;



let rec dataset () = 
  try
    let line = read_line () in begin
      count_chars (explode_string line);
      dataset ();
    end ;
  with End_of_file -> ();;


dataset ();;

for code = (Char.code 'a') to (Char.code 'z') do
  let c = Char.lowercase (Char.chr code) in
  Printf.printf "%c : %i\n" c (try Char_tbl.find counts c with Not_found -> 0);
done
