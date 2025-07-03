let merge a left mid right =
  let n1 = mid - left in
  let n2 = right - mid in
  let l_arr = Array.make (n1 + 1) 0 in
  let r_arr = Array.make (n2 + 1) 0 in
  for i = 0 to n1 - 1 do
    l_arr.(i) <- a.(left + i)
  done;
  for i = 0 to n2 - 1 do
    r_arr.(i) <- a.(mid + i)
  done;
  l_arr.(n1) <- max_int;
  r_arr.(n2) <- max_int;
  let i = ref 0 in
  let j = ref 0 in
  for k = left to right - 1 do
    if l_arr.(!i) <= r_arr.(!j) then (
      a.(k) <- l_arr.(!i);
      i := !i + 1
    ) else (
      a.(k) <- r_arr.(!j);
      j := !j + 1
    )
  done;
  right - left;;

let rec merge_sort a left right =
  if right - left > 1 then
    let mid = (left + right) / 2 in
    let c1 = merge_sort a left mid in
    let c2 = merge_sort a mid right in
    let c_merge = merge a left mid right in
    c1 + c2 + c_merge
  else
    0;;

let n = Scanf.scanf "%d\n" (fun n -> n);;
let a = Array.make n 0;;
for i = 0 to n-1 do
  a.(i) <- Scanf.scanf "%d " (fun x -> x)
done;;
   
let total_comparisons = merge_sort a 0 n;;

for i = 0 to n - 1 do
  Printf.printf (if i = n - 1 then "%d\n" else "%d ") a.(i);
done;;

Printf.printf "%d\n" total_comparisons;
