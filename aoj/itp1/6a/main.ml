let read_integers n =
  let rec get_next acc = function
  | 0 -> acc
  | n -> get_next (Scanf.scanf "%i " (fun x -> x :: acc)) (n - 1) in
  (get_next [] n) in
let rec print_integers = function
  | [] -> ()
  | [x] -> Printf.printf "%i\n" x
  | h :: t -> begin Printf.printf "%i " h;  print_integers t; end in
let solve n = 
  print_integers (read_integers n)
in Scanf.scanf "%i\n" solve