let counting_sort a k =
  let n = Array.length a in
  let b = Array.make n 0 in
  let c = Array.make 10001 0 in
  
  for j = 0 to n - 1 do
    let x = a.(j) in
    c.(x) <- c.(x) + 1
  done;
  
  for i = 1 to k do
    c.(i) <- c.(i) + c.(i - 1)
  done;
  
  for j = n - 1 downto 0 do
    let x = a.(j) in
    let idx = c.(x) - 1 in
    b.(idx) <- x;
    c.(x) <- c.(x) - 1
  done;
  
  b


let n = Scanf.scanf "%d\n" (fun n -> n);;
let a = Array.make n 0;;
for i = 0 to n-1 do
  a.(i) <- Scanf.scanf "%d " (fun x -> x)
done;;
   
let b = counting_sort a 10000;;

for i = 0 to n - 1 do
  Printf.printf (if i = n - 1 then "%d\n" else "%d ") b.(i);
done;;
