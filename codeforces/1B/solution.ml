open Nativeint;;
#load "str.cma" ;;

let ( / ) x y = div x y;;
let ( * ) x y = mul x y;;

let solve_1 s1 s2 = s1 ^ s2 ^ " ";;

let solve_2 s1 s2 = s1 ^ "---" ^ s2 ^ " ";;



let solve: string -> string = fun s ->
  let open Str in
  let r_1 = regexp "^R\\([0-9]+\\)C\\([0-9]+\\)$" in
  let r_2 = regexp "^\\([A-Z]+\\)\\([0-9]+\\)$" in
  if (string_match r_1 s 0) then (solve_1 (Str.matched_group 1 s) (Str.matched_group 2 s))
  else if string_match r_2 s 0 then solve_2 (Str.matched_group 1 s) (Str.matched_group 2 s)
  else raise (Failure "Unknown format");;



let rec iter i max =
  if i < max then
    let s = input_line stdin in
    (print_string (solve s); print_newline (); iter (succ i) max)in
iter zero (of_string (input_line stdin));;
