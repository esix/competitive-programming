let rec dataset i =
  Scanf.scanf "%i %i\n" (fun h w -> 
    if h != 0 && w != 0 then begin
      Printf.printf "%s\n" (String.make w '#');
      let rec solve h w = if h <= 0 then () else begin
        Printf.printf "#%s#\n" (String.make (w - 2) '.');
        solve (h - 1) w
      end in
      solve (h - 2) w;
      Printf.printf "%s\n" (String.make w '#');
      Printf.printf "\n";
      dataset (i + 1);
      ()
    end else ()) in
dataset 1