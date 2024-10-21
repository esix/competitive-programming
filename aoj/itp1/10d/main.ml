let solve n = 
  let read_vector n =
    let rec do_parse acc i =
      if i = n then
        acc
      else
        do_parse (Scanf.scanf "%f " (fun x -> x :: acc)) (i + 1)
    in List.rev (do_parse [] 0) in
  let a = read_vector n in
  let b = read_vector n in
  let ab = List.combine a b in
  let accumulate (acc1, acc2, acc3, acc4) (a, b) = 
    let delta = abs_float (a -. b) in
    let sqr n = n *. n in
    let cube n = n *. n *. n in
    (acc1 +. delta, acc2 +. sqr delta, acc3 +. cube delta, max acc4 delta) in
  let (r1, r2, r3, r4) = List.fold_left accumulate (0.0, 0.0, 0.0, 0.0) ab in
  Printf.printf "%f\n%f\n%f\n%f\n" r1 (r2 ** (1.0 /. 2.0)) (r3 ** (1.0 /. 3.0)) r4 in
Scanf.scanf "%d\n" solve;
