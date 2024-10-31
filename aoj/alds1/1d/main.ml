let read_and_solve n first = 
  let rec aux i current_min current_result = 
    if i = n then
      current_result
    else
      Scanf.scanf "%d\n" (fun v -> 
        let new_min = min current_min v in
        let new_result = max current_result (v - current_min) in
        aux (i + 1) new_min new_result) in
  aux 1 first (-1000000000) in

Printf.printf "%d\n" (Scanf.scanf "%d\n%d\n" read_and_solve)
