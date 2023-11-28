Scanf.scanf "%i %i %i\n" (fun n m l -> 
  let a = Array.init n (fun _ -> Array.init m (fun _ -> 0)) in
  let b = Array.init m (fun _ -> Array.init l (fun _ -> 0)) in 
  let v = ref 0 in begin
    for i = 0 to (n - 1) do
      for j = 0 to (m - 1) do
        Scanf.scanf "%i " (fun v -> a.(i).(j) <- v);
      done
    done;
    for i = 0 to (m - 1) do
      for j = 0 to (l - 1) do
        Scanf.scanf "%i " (fun v -> b.(i).(j) <- v);
      done
    done;
    for i = 0 to (n - 1) do
      for j = 0 to (l - 1) do
        v := 0;
        for k = 0 to (m - 1) do
          v := !v + a.(i).(k) * b.(k).(j)
        done;
        Printf.printf "%i" !v;
        if j == (l - 1) then Printf.printf "\n" else Printf.printf " ";
      done;
    done
  end)