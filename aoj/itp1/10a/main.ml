let count_distance x1 y1 x2 y2 = 
  Printf.printf "%f\n" (sqrt ((x1 -. x2) *. (x1 -. x2) +. (y1 -. y2) *. (y1 -. y2))) in
Scanf.scanf "%f %f %f %f" count_distance
