type card = { suit: char; num: int; index: int }

let exchange a i j =
  let tmp = a.(i) in
  a.(i) <- a.(j);
  a.(j) <- tmp

let partition a p r =
  let x = a.(r) in
  let i = ref (p - 1) in
  for j = p to r - 1 do
    if a.(j).num <= x.num then (
      i := !i + 1;
      exchange a !i j
    )
  done;
  exchange a (!i + 1) r;
  !i + 1

let quicksort a =
  let n = Array.length a in
  if n > 1 then
    let stack = ref [(0, n-1)] in
    while !stack <> [] do
      match !stack with
      | (p, r) :: rest ->
          stack := rest;
          if p < r then
            let q = partition a p r in
            stack := (p, q-1) :: (q+1, r) :: !stack
      | [] -> ()
    done

let n = Scanf.scanf "%d\n" (fun n -> n);;

let a = Array.init n (fun i -> Scanf.scanf "%c %d\n" (fun suit num -> { suit; num; index = i }));;

quicksort a;

let stable = ref true in
  for i = 0 to n - 2 do
    if a.(i).num = a.(i+1).num && a.(i).index > a.(i+1).index then
      stable := false
  done;
  print_endline (if !stable then "Stable" else "Not stable");

Array.iter (fun card -> Printf.printf "%c %d\n" card.suit card.num) a
