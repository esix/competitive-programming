Scanf.scanf "%i\n" (fun n -> 
  begin 
    let min = ref 0 in
    let max = ref 0 in
    let sum = ref 0 in
    for i = 1 to n do 
      Scanf.scanf "%i " (fun x -> 
        begin 
          min := if i == 1 || x < !min then x else !min;
          max := if i == 1 || x > !max then x else !max;
          sum := !sum + x
        end)
    done;
    Printf.printf "%i %i %i\n" !min !max !sum 
  end)
