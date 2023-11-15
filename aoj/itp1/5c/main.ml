let rec dataset i =
  Scanf.scanf "%i %i\n" (fun h w -> 
    if h != 0 && w != 0 then begin
      let rec solve i = if i >= h then () else begin
        let rec prn_line j = begin
          if j >= w then () 
          else begin
            if (j + i) mod 2 == 0 then Printf.printf "#" else Printf.printf ".";
            prn_line (j + 1);
          end 
        end in
        prn_line 0;
        Printf.printf "\n";
        solve (i + 1)
      end in
      solve 0;
      Printf.printf "\n";
      dataset (i + 1);
      ()
    end else ()) in
dataset 1