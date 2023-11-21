Scanf.scanf "%i\n" (fun n -> 
  let result = Array.init 4 (fun _ -> Array.init 3 (fun _ -> Array.init 10 (fun _ -> 0))) in
  let read_notices () = 
    for i = 1 to n do
      Scanf.scanf "%i %i %i %i\n" (fun b f r v -> result.(b - 1).(f - 1).(r - 1) <- result.(b - 1).(f - 1).(r - 1) + v)
    done in
  let print_result () = 
    for b = 1 to 4 do
      for f = 1 to 3 do 
        for r = 1 to 10 do
          print_string " ";
          print_int result.(b - 1).(f - 1).(r - 1);
        done;
        print_endline "";
      done;
      
      if b != 4 then print_endline "####################";
    done in
  begin
    read_notices ();
    print_result ();
  end)