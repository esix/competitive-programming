let pi : float = 3.14159265358979324;;

let round x = floor (x +. 0.5);;

let abs x = if x < 0.0 then -.x else x;;

let det3 mtx =
  let det2 a11 a12 a21 a22 = a11 *. a22 -. a21 *. a12 in
  let (col1, col2, col3) = mtx in
  let (a11, a21, a31) = col1 in
  let (a12, a22, a32) = col2 in
  let (a13, a23, a33) = col3 in
  a11 *. (det2 a22 a23 a32 a33) -.
  a12 *. (det2 a21 a23 a31 a33) +.
  a13 *. (det2 a21 a22 a31 a32);;


let vec p0 p1 = ((fst p1) -. (fst p0), (snd p1) -. (snd p0));;


let scalar_mul v1 v2 = (fst v1) *. (fst v2) +. (snd v1) *. (snd v2);;


let vec_abs v =
  let (x, y) = v in
  sqrt (x *. x +. y *. y);;


let vec_len v = sqrt ((fst v) *. (fst v) +. (snd v) *. (snd v));;


let angle v1 v2 = acos ((scalar_mul v1 v2) /. ((vec_abs v1) *. (vec_abs v2)));;


let get_center p1 p2 p3 =
  let x_row = (fst p1, fst p2, fst p3) in
  let y_row = (snd p1, snd p2, snd p3) in
  let one_row = (1.0, 1.0, 1.0) in
  let sq_row = ((fst p1) *. (fst p1) +. (snd p1) *. (snd p1),
                (fst p2) *. (fst p2) +. (snd p2) *. (snd p2),
                (fst p3) *. (fst p3) +. (snd p3) *. (snd p3)) in
  let d = 2.0 *. (det3 (x_row, y_row, one_row)) in
  let x0 = 1.0 /. d *. det3 (sq_row, y_row, one_row) in
  let y0 = - 1.0 /. d *. det3 (sq_row, x_row, one_row) in
  (x0, y0);;


let solve_alphas a1 a2 =
  let rec solve_alphas' n =
    if n > 100 then n
    else
      let a = 2.0 *. pi /. float_of_int n in
      let k1 = a1 /. a in
      let k2 = a2 /. a in
      let delta_k1 = abs (k1 -. round k1) in
      let delta_k2 = abs (k2 -. round k2) in
      if delta_k1 < 1e-5 && delta_k2 < 1e-5 then n
      else solve_alphas' (n+1) in
  solve_alphas' 3;;


let solve x1 y1 x2 y2 x3 y3 =
  let p1 = (x1, y1) in
  let p2 = (x2, y2) in
  let p3 = (x3, y3) in
  let p0 = get_center p1 p2 p3  in
  let v1 = vec p0 p1 in
  let v2 = vec p0 p2 in
  let v3 = vec p0 p3 in
  let a1 = angle v1 v2 in
  let a2 = angle v2 v3 in
  let n = solve_alphas a1 a2 in
  let r = vec_len v1 in
  float_of_int(n) /. 2.0 *. r *. r *. sin (2.0 *. pi /. float_of_int n);;


Printf.printf "%f" (Scanf.scanf "%f %f %f %f %f %f" solve);;
