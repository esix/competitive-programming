let eval prg =
  let binary_op stack op =
    let a = int_of_string (List.hd stack) in
    let b = int_of_string (List.hd (List.tl stack)) in
    let result = op a b in
    (string_of_int result) :: (List.tl (List.tl stack)) in

  let rec next_cycle prg stack = 
    match prg with
    | [] -> List.hd stack
    | x::xs when x = "+" -> next_cycle xs (binary_op stack (fun x y -> y + x))
    | x::xs when x = "-" -> next_cycle xs (binary_op stack (fun x y -> y - x))
    | x::xs when x = "*" -> next_cycle xs (binary_op stack (fun x y -> y * x))
    | x::xs -> next_cycle xs (x :: stack)
  in
  next_cycle prg [] 
in

let split_char sep str =
  let rec indices acc i =
    try
      let i = succ(String.index_from str i sep) in
      indices (i::acc) i
    with Not_found ->
      (String.length str + 1) :: acc
  in
  let is = indices [0] 0 in
  let rec aux acc = function
    | last::start::tl ->
        let w = String.sub str start (last-start-1) in
        aux (w::acc) (start::tl)
    | _ -> acc
  in
  aux [] is 
in


let inp = read_line () in
let prg = split_char ' ' inp in
Printf.printf "%s\n" (eval prg)
