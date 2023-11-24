let solve n x = 
  let result = ref 0 in begin
    for a = 1 to (-2 + min n x) do
      for b = (a + 1) to (-1 + min n x) do
        let c = x - a - b in
        if c > b && c <= n then result := !result + 1;
      done
    done;
    !result 
  end in
let rec next_dataset () = 
  Scanf.scanf "%i %i\n" (fun n x -> 
    if n != 0 || x != 0 then 
    begin
      Printf.printf "%i\n" (solve n x);
      next_dataset ();
    end) in
next_dataset ()
