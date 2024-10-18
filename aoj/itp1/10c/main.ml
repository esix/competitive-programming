let sqr n = n *. n in

let proceed n =
  let rec aux i sum sum_squared = 
    match i with
    | x when x = n -> let nn = float_of_int n in 
                      let a1 = sum_squared /. nn in
                      let a2 = sqr (sum /. nn) in
                      Printf.printf "%f\n" (sqrt (a1 -. a2))
    | x when x = n - 1 -> Scanf.scanf "%f\n" (fun next_value -> aux (i + 1) (sum +. next_value) (sum_squared +. sqr next_value))
    | _ -> Scanf.scanf "%f " (fun next_value -> aux (i + 1) (sum +. next_value) (sum_squared +. sqr next_value)) in
  aux 0 0. 0. in

let rec next_dataset () = 
  Scanf.scanf "%d\n" (function
    | 0 -> ()
    | n -> begin
        proceed n;
        next_dataset ()
       end) in

next_dataset ()
