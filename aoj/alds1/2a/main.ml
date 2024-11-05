let print_array a = 
  let n = Array.length a in
  for i = 0 to n - 1 do
    Printf.printf (if i = n - 1 then "%d\n" else "%d ") a.(i);
  done in

let read_and_solve n = 
  let a = Array.init n (fun idx -> Scanf.scanf "%d " (fun x -> x)) in
  let count = ref 0 in
  for i = 0 to n - 1 do
    for j = n - 1 downto i + 1 do
      if a.(j) < a.(j - 1) then begin
        let tmp = a.(j) in 
        a.(j) <- a.(j - 1);
        a.(j - 1) <- tmp;
        count := !count + 1;
      end
    done
  done;
  print_array a;
  Printf.printf "%d\n" !count;
in

Scanf.scanf "%d\n" read_and_solve
