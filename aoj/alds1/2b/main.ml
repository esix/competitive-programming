let print_array a = 
  let n = Array.length a in
  for i = 0 to n - 1 do
    Printf.printf (if i = n - 1 then "%d\n" else "%d ") a.(i);
  done in

let read_and_solve n = 
  let a = Array.init n (fun idx -> Scanf.scanf "%d " (fun x -> x)) in
  let count = ref 0 in
  for i = 0 to n - 1 do
    let mini = ref i in
    for j = i to n - 1 do
      if a.(j) < a.(!mini) then
        mini := j;
    done;
    let tmp = a.(i) in 
    a.(i) <- a.(!mini);
    a.(!mini) <- tmp;
    if i != !mini then
      count := !count + 1;
  done;
  print_array a;
  Printf.printf "%d\n" !count;
in

Scanf.scanf "%d\n" read_and_solve
