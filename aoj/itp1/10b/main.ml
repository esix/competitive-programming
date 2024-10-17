let count_triangle b c alphaDegrees = 
  let pi = 4. *. atan 1. in
  let alpha = alphaDegrees *. pi /. 180. in
  let a = sqrt (b *. b +. c *. c -. 2. *. b *. c *. (cos alpha)) in
  let p = (a +. b +. c) /. 2. in
  let s = 0.5 *. b *. c *. (sin alpha) in
  (* let s = sqrt ( p *. (p -. a) *. (p -. b)  *. (p -. c)) in *)
  let h = c *. (sin alpha) in
  Printf.printf "%f\n%f\n%f\n" s (2. *. p) h in
Scanf.scanf "%f %f %f" count_triangle
