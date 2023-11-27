Scanf.scanf "%i %i\n" (fun r c -> 
  let table = Array.init r (fun _ -> Array.init c (fun _ -> 0)) in
  let total_sum = ref 0 in
  begin
    for i = 0 to (r - 1) do
      for j = 0 to (c - 1) do
        Scanf.scanf "%i " (fun v -> table.(i).(j) <- v;)
      done
    done;
    let sum_row i = 
      let result = ref 0 in begin
        for j = 0 to (c - 1) do
          result := !result + table.(i).(j)
        done;
        !result
      end in
    let sum_col j = 
      let result = ref 0 in begin
        for i = 0 to (r - 1) do
          result := !result + table.(i).(j)
        done;
        !result
      end in
    for i = 0 to (r - 1) do
      for j = 0 to (c - 1) do
        Printf.printf "%i " table.(i).(j);
        total_sum := !total_sum + table.(i).(j)
      done;
      Printf.printf "%i\n" (sum_row i)
    done;
    for j = 0 to (c - 1) do
      Printf.printf "%i " (sum_col j);
    done;
    Printf.printf "%i\n" !total_sum;
  end)
