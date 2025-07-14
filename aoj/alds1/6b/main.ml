let swap a i j =
  let temp = a.(i) in
  a.(i) <- a.(j);
  a.(j) <- temp;;


let partition a = 
  let len = Array.length a in
  let r = len - 1 in
  let p = 0 in
  let x = a.(r) in
  let i = ref (p - 1) in
  for j = p to r - 1 do
    if a.(j) <= x then (
      i := !i + 1;
      swap a !i j
    )
  done;
  swap a (!i + 1) r;
  !i + 1;;


let n = Scanf.scanf "%d\n" (fun n -> n);;
let a = Array.make n 0;;
for i = 0 to n-1 do
  a.(i) <- Scanf.scanf "%d " (fun x -> x)
done;;
   
let idx = partition a;;

for i = 0 to n - 1 do
  Printf.printf (if i = idx then "[%d]" else "%d") a.(i);
  Printf.printf (if i = n - 1 then "\n" else " ");
done;;
