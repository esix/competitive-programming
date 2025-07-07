let count_inversions arr =
  let rec merge_count left right =
    let len_left = Array.length left in
    let len_right = Array.length right in
    let merged = Array.make (len_left + len_right) 0 in
    let count = ref 0 in
    let i = ref 0 in
    let j = ref 0 in 
    let k = ref 0 in
    
    while !i < len_left && !j < len_right do
      if left.(!i) <= right.(!j) then (
        merged.(!k) <- left.(!i);
        incr i;
      ) else (
        merged.(!k) <- right.(!j);
        incr j;
        count := !count + len_left - !i; 
      );
      incr k;
    done;
    
    while !i < len_left do
      merged.(!k) <- left.(!i);
      incr i;
      incr k;
    done;
    
    while !j < len_right do
      merged.(!k) <- right.(!j);
      incr j;
      incr k;
    done;
    
    (merged, !count)
  
  and sort_count a =
    let len = Array.length a in
    if len <= 1 then (a, 0)
    else (
      let mid = len / 2 in
      let left = Array.sub a 0 mid in
      let right = Array.sub a mid (len - mid) in
      let left_sorted, cnt_left = sort_count left in
      let right_sorted, cnt_right = sort_count right in
      let merged, cnt_merge = merge_count left_sorted right_sorted in
      (merged, cnt_left + cnt_right + cnt_merge)
    )
  in
  
  let _, count = sort_count arr in
  count;;

let n = Scanf.scanf "%d\n" (fun n -> n);;
let a = Array.make n 0;;
for i = 0 to n-1 do
  a.(i) <- Scanf.scanf "%d " (fun x -> x)
done;;
   
let cnt = count_inversions a;;
Printf.printf "%d\n" cnt;
