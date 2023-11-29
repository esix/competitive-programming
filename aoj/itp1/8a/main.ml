let explode_string s =
  let rec exp i l =
    if i < 0 then l else exp (i - 1) (s.[i] :: l) in
  exp (String.length s - 1) [] in
let implode_char_list l = String.concat "" (List.map (String.make 1) l) in
let is_upper c = (Char.code c) <= 90 in
let change_case c = if (is_upper c) then Char.lowercase c else Char.uppercase c in
let rec solve_chars = function
| [] -> []
| h :: t -> (change_case h) :: solve_chars t in
let solve s = s |> explode_string |> solve_chars |> implode_char_list in
print_endline (solve (read_line ()))
