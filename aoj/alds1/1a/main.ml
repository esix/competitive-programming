let print_array a = 
  let n = Array.length a in
  for i = 0 to n - 1 do
    Printf.printf (if i = n - 1 then "%d\n" else "%d ") a.(i);
  done in

let read_and_solve n = 
  let a = Array.init n (fun idx -> Scanf.scanf "%d " (fun x -> x)) in
  let _ = print_array a in
  for i = 1 to n - 1 do
    let key = a.(i) in
    (*  insert a[i] into the sorted sequence a[0,...,j-1] */ *)
    let j = ref (i - 1) in
    while !j >= 0 && a.(!j) > key do
        a.(!j+1) <- a.(!j);
        j := !j - 1;
    done;
    a.(!j+1) <- key;
    print_array a;
  done in

Scanf.scanf "%d\n" read_and_solve
