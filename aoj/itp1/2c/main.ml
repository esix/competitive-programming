Scanf.scanf "%i %i %i\n" (fun a b c ->
  let aa = min a (min b c) in
  let cc = max a (max b c) in
  let bb = a + b + c - aa - cc in
  Printf.printf "%d %d %d\n" aa bb cc
)