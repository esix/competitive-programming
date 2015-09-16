open Char;;
open String;;

let letters_of_num col =
  let rec letters_of_num' col =
    if col < 26 then Char.escaped (chr (col + code 'A'))
    else (letters_of_num' (col / 26 - 1)) ^ (letters_of_num' (col mod 26)) in
  letters_of_num' (col - 1);;

let solve_1 row col = letters_of_num (int_of_string col) ^ row;;


let rec pow a = function
  | 0 -> 1
  | 1 -> a
  | n ->
    let b = pow a (n / 2) in
    b * b * (if n mod 2 = 0 then 1 else a);;

let num_of_letters ls =
  let rec num_of_letters' ls =
    if length ls == 1 then code (get ls 0) - code 'A'
    else
      let hd = sub ls 0 1 in
      let tl = sub ls 1 ((length ls) - 1) in
      (pow 26 (length ls - 1)) * (1 + num_of_letters' hd) + (num_of_letters' tl) in
  num_of_letters' ls + 1;;


let solve_2 row col = "R" ^ row ^ "C" ^ (string_of_int (num_of_letters col));;




let solve: string -> string = fun s ->
  let open Str in
  let r_1 = regexp "^R\\([0-9]+\\)C\\([0-9]+\\)$" in
  let r_2 = regexp "^\\([A-Z]+\\)\\([0-9]+\\)$" in
  if (string_match r_1 s 0) then (solve_1 (Str.matched_group 1 s) (Str.matched_group 2 s))
  else if string_match r_2 s 0 then solve_2 (Str.matched_group 2 s) (Str.matched_group 1 s)
  else raise (Failure "Unknown format");;



let rec iter i max =
  if i < max then
    let s = input_line stdin in
    (print_string (solve s); print_newline (); iter (succ i) max)in
iter 0 (int_of_string (input_line stdin));;
