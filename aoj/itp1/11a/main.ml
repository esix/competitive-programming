let rotate (a1, a2, a3, a4, a5, a6) s = 
  let rec rotate_char (a1, a2, a3, a4, a5, a6) i = 
    if i = String.length s then
      (a1, a2, a3, a4, a5, a6)
    else
      match s.[i] with
      | 'E' -> rotate_char (a4, a2, a1, a6, a5, a3) (i + 1)
      | 'N' -> rotate_char (a2, a6, a3, a4, a1, a5) (i + 1)
      | 'S' -> rotate_char (a5, a1, a3, a4, a6, a2) (i + 1)
      | 'W' -> rotate_char (a3, a2, a6, a1, a5, a4) (i + 1)
      | _ ->  raise Exit in
  rotate_char (a1, a2, a3, a4, a5, a6) 0;;

let solve a1 a2 a3 a4 a5 a6 s =
  let (top, _, _, _, _, _) = rotate (a1, a2, a3, a4, a5, a6) s in
  Printf.printf "%d\n" top;;

Scanf.scanf "%d %d %d %d %d %d\n%s\n" solve;
