let print_point (x, y) =
  Printf.printf "%.8f %.8f\n" x y in

let turn (x1, y1) (x2, y2) = 
  let angle = Float.pi /. 3.0 in
  let dx = x2 -. x1 in
  let dy = y2 -. y1 in
  let vx = dx *. (Float.cos angle) -. dy *. (Float.sin angle) in
  let vy = dx *. (Float.sin angle) +. dy *. (Float.cos angle) in
  (x1 +. vx, y1 +. vy) in

let approx (x1, y1) (x2, y2) ratio = 
  (x1 *. (1.0 -. ratio) +. x2 *. ratio, 
   y1 *. (1.0 -. ratio) +. y2 *. ratio) in

let rec koch p1 p2 depth = 
  if depth == 0 then 
    print_point p1
  else 
    let s = approx p1 p2 (1.0 /. 3.0) in
    let t = approx p1 p2 (2.0 /. 3.0) in
    let u = turn s t in
    begin
      koch p1 s (depth - 1);
      koch s u (depth - 1);
      koch u t (depth - 1);
      koch t p2 (depth - 1);
    end in

let depth = read_int() in
koch (0.0, 0.0) (100.0, 0.0) depth;

print_point (100.0, 0.0)
