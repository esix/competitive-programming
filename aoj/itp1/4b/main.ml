Scanf.scanf "%f\n" (fun r -> 
  let pi = 4.0 *. atan 1.0 in
    Printf.printf "%f %f\n" (pi *. r *. r) (2.0 *. pi *. r)
)
