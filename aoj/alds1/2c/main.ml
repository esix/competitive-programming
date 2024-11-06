let print_array a = 
  let n = Array.length a in
  for i = 0 to n - 1 do
    Printf.printf (if i = n - 1 then "%s\n" else "%s ") a.(i);
  done;;

let get_digit c = int_of_char c - int_of_char '0';;


let swap a i j = 
  let tmp = a.(i) in
  a.(i) <- a.(j);
  a.(j) <- tmp;;
  

let cmp card1 card2 = 
  (get_digit card1.[1]) - (get_digit card2.[1]) 
in


let bubble_sort a = 
  let n = Array.length a in
  for i = 0 to n - 1 do
    for j = n - 1 downto i + 1 do
      if (cmp a.(j) a.(j - 1)) < 0 then
        swap a j (j - 1)
    done
  done;
  a
in

let selection_sort a =
  let n = Array.length a in
  for i = 0 to n - 1 do
    let mini = ref i in
    for j = i to n - 1 do
      if (cmp a.(j) a.(!mini)) < 0 then
        mini := j;
    done;
    swap a i !mini
  done; 
  a
in



let n = Scanf.scanf "%d\n" (fun x -> x) in
let a = Array.init n (fun idx -> Scanf.scanf "%s " (fun x -> x)) in
let bubble_sorted = bubble_sort (Array.copy a) in
let selection_sorted = selection_sort (Array.copy a) in
Array.stable_sort cmp a;
print_array bubble_sorted;
Printf.printf "%s\n" (if bubble_sorted = a then "Stable" else "Not stable");
print_array selection_sorted;
Printf.printf "%s\n" (if selection_sorted = a then "Stable" else "Not stable");
