let rec read_next_cards score_a score_b n =
    if n = 0 then
      Printf.printf "%d %d\n" score_a score_b
    else
      Scanf.scanf "%s %s\n" (fun a b -> 
        match (a, b) with
        | (a, b) when a = b -> read_next_cards (score_a + 1) (score_b + 1) (n - 1)
        | (a, b) when a > b -> read_next_cards (score_a + 3) (score_b) (n - 1)
        | _ -> read_next_cards (score_a) (score_b + 3) (n - 1)
      );;

Scanf.scanf "%d\n" (read_next_cards 0 0);;
