module CardSet = Set.Make( 
  struct
    let compare = Pervasives.compare
    type t = char * int
  end);;

let read_cards n = 
  let rec get_next acc = function
  | 0 -> acc
  | i -> get_next (Scanf.scanf "%c %i\n" (fun s r -> CardSet.add (s, r) acc)) (i - 1) in
  (get_next CardSet.empty n) in
let print_absent_cards cards = 
  let print_absent_cards_for_suits s = 
    for i = 1 to 13 do
      try
        let _ = CardSet.find (s, i) cards in ();
      with
      | Not_found -> Printf.printf "%c %i\n" s i
    done in 
  begin
    print_absent_cards_for_suits 'S';
    print_absent_cards_for_suits 'H';
    print_absent_cards_for_suits 'C';
    print_absent_cards_for_suits 'D';
  end in
let solve n = print_absent_cards (read_cards n) in
Scanf.scanf "%i\n" solve
