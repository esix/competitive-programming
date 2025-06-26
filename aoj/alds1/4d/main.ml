let (n, k) = Scanf.scanf " %d %d\n" (fun n k -> (n, k));;
let w = Array.init n (fun _ -> Scanf.scanf "%d\n" (fun x -> x));;

let is_fit p =
  let trucks = ref 1 in
  let current = ref 0 in
  for i = 0 to n - 1 do
    if !current + w.(i) <= p then
      current := !current + w.(i)
    else (
      trucks := !trucks + 1;
      current := w.(i)
    )
  done;
  !trucks <= k;;
  
let rec binary_search low high =
  if low >= high then 
    low
  else
    let mid = (low + high) / 2 in
    if is_fit mid then
      binary_search low mid
    else
      binary_search (mid + 1) high;;
  
let left = Array.fold_left max min_int w;;
let right = Array.fold_left (+) 0 w;;
let result = binary_search left right;;
Printf.printf "%d\n" result
