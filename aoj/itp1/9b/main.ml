let rec read_and_proceed_tasks deck num = 
  if num = 0 then
    Printf.printf "%s\n" deck
  else
    Scanf.scanf "%d\n" (fun d ->
      read_and_proceed_tasks ((String.sub deck d (String.length deck - d)) ^ (String.sub deck 0 d)) (num - 1));;


let rec read_next_deck () =
  Scanf.scanf "%s\n" (fun deck -> 
    if deck = "-" then ()
    else begin 
      Scanf.scanf "%d\n" (read_and_proceed_tasks deck);
      read_next_deck ();
    end);;

read_next_deck ();
