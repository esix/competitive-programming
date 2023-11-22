Scanf.scanf "%i %i\n" (fun n m -> 
  let a = Array.init n (fun _ -> Array.init m (fun _ -> 0)) in
  let b = Array.init m (fun _ -> 0) in begin
    for i = 0 to (n - 1) do
      for j = 0 to (m - 1) do
        Scanf.scanf "%i " (fun v -> a.(i).(j) <- v);
      done
    done;
    for j = 0 to (m - 1) do
      Scanf.scanf "%i " (fun v -> b.(j) <- v);
    done;

    for i = 0 to (n - 1) do
      let (--) i j = 
        let rec aux n acc =
          if n < i then acc else aux (n-1) (n :: acc)
        in aux j [] in
      let rec sum l = match l with
      | [] -> 0
      | h::t -> h + (sum t) in
      let rec map fn l = match l with
      | [] -> []
      | h::t -> fn(h) :: (map fn t) in
      let range = 0 -- (m - 1) in
      let v = map (fun j -> a.(i).(j) * b.(j)) range in 
      Printf.printf "%i\n" (sum v)
    done;
  end)