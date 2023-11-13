let rec dataset i =
  let rec solve h w = if h == 0 then () else begin
    Printf.printf "%s\n" (String.make w '#');
    solve (h - 1) w
  end in
  Scanf.scanf "%i %i\n" (fun h w -> 
    if h != 0 && w != 0 then begin
      solve h w;
      Printf.printf "\n";
      dataset (i + 1);
      ()
    end else ()) in
dataset 1