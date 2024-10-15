exception Invalid_input;;

let rec perform_commands str q =
  if q = 0 then 
    ()
  else 
    let perform_replace a b p = 
      (String.sub str 0 a) ^ p ^ (String.sub str (b + 1) (String.length str - b - 1)) in


    let perform_reverse a b = 
      let string_rev str =
        let rec aux  idx = match idx with
        | 0 -> Char.escaped (str.[0])
        | _ -> (Char.escaped str.[idx]) ^ (aux (idx-1)) in
        aux ((String.length str)-1) in
       (String.sub str 0 a) ^ (string_rev (String.sub str a (b - a + 1))) ^ (String.sub str (b + 1) (String.length str - b - 1)) in

    let perform_print a b = 
      begin
        Printf.printf "%s\n" (String.sub str a (b - a + 1));
        str;
      end in

    let new_str = 
      Scanf.scanf "%s " (function
      | "replace" -> (Scanf.scanf "%d %d %s\n" perform_replace)
      | "reverse" -> (Scanf.scanf "%d %d\n" perform_reverse)
      | "print" -> (Scanf.scanf "%d %d\n" perform_print)
      | _ -> raise Invalid_input
      ) in 
    perform_commands new_str (q - 1)
  in

Scanf.scanf "%s\n%d\n" perform_commands
