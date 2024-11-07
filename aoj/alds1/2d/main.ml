let print_array a = 
  let n = Array.length a in
  for i = 0 to n - 1 do
    Printf.printf (if i = n - 1 then "%d\n" else "%d ") a.(i);
  done in

let insertion_sort a n g =
  let cnt = ref 0 in
  for i = g to n - 1 do
    let v = a.(i) in
    let j = ref (i - g) in
    while !j >= 0 && a.(!j) > v do
      a.(!j + g) <- a.(!j);
      j := !j - g;
      cnt := !cnt + 1
    done;
    a.(!j + g) <- v
  done;
  !cnt in

let shell_sort a n g =
  let cnt = ref 0 in
  let m = Array.length g in
  for i = 0 to m-1 do
    cnt := (!cnt) + (insertion_sort a n g.(i))
  done;
  !cnt in

let rec generate_g = function
| n when n <= 3 -> [1]
| n -> (n / 2) :: generate_g (n / 2) in


let n = Scanf.scanf "%d\n" (fun x -> x) in
let a = Array.init n (fun idx -> Scanf.scanf "%d\n" (fun x -> x)) in
let g = Array.of_list (generate_g n) in
let cnt = shell_sort a n g in
Printf.printf "%d\n" (Array.length g);
print_array g;
Printf.printf "%d\n" cnt;
for i = 0 to n - 1 do
  Printf.printf "%d\n" a.(i);
done