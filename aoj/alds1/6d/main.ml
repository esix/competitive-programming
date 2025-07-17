let n = Scanf.scanf "%d\n" (fun n -> n);;

let a = Array.init n (fun i -> Scanf.scanf "%d " (fun value -> (value, i)));;

Array.sort compare a;;

let min_global = fst a.(0) in

let visited = Array.init n (fun _ -> false) in

let rec collect_cycle i = 
  if visited.(i) then
    []
  else begin
    visited.(i) <- true;
    (fst a.(i)) ::  collect_cycle (snd a.(i))
  end in


let rec find_next_cycle i =
  if i == n then 
    0
  else if visited.(i) then
    find_next_cycle (i + 1)
  else 
    let cycle_indeces = collect_cycle i in
    let k = List.length cycle_indeces in
    let current_cost = 
      if k <= 1 then
        0
      else begin
        let s = List.fold_left (+) 0 cycle_indeces in
        let min_list lst = List.fold_left min (List.hd lst) (List.tl lst) in
        let m = min_list cycle_indeces in
        let cost1 = s + (k - 2) * m in
        let cost2 = s + m + (k + 1) * min_global in
        min cost1 cost2
      end in
    current_cost + find_next_cycle (i + 1)
  in

let result = find_next_cycle 0 in

Printf.printf "%d\n" result
