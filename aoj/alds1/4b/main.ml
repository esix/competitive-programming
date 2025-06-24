let _ = read_int () in
let s = Array.of_list (List.sort compare (List.map int_of_string (String.split_on_char ' ' (read_line ())))) in
let binary_search target =
  let rec search left right =
    if left > right then false
    else
      let mid = left + (right - left) / 2 in
      match compare target s.(mid) with
      | 0 -> true               (* Нашли элемент *)
      | x when x < 0 -> search left (mid - 1)  (* Ищем в левой половине *)
      | _ -> search (mid + 1) right            (* Ищем в правой половине *)
  in
    search 0 (Array.length s - 1)
in
let _ = read_int () in
let t = List.map int_of_string (String.split_on_char ' ' (read_line ())) in
let result = List.fold_left (fun count x -> if binary_search x then count + 1 else count) 0 t in
print_int result;
print_newline ()
