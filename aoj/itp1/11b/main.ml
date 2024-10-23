let match_2_to_4 (x1, x2) (a1, a2, a3, a4) = 
  (x1 = a1 && x2 = a2) ||
  (x1 = a2 && x2 = a3) ||
  (x1 = a3 && x2 = a4) ||
  (x1 = a4 && x2 = a1) in


let read_tasks a1 a2 a3 a4 a5 a6 n =

  let solve = function
  | (x1, x2) when match_2_to_4 (x1, x2) (a2, a3, a5, a4) -> a1
  | (x1, x2) when match_2_to_4 (x1, x2) (a1, a4, a6, a3) -> a2
  | (x1, x2) when match_2_to_4 (x1, x2) (a1, a2, a6, a5) -> a3
  | (x1, x2) when match_2_to_4 (x1, x2) (a5, a6, a2, a1) -> a4
  | (x1, x2) when match_2_to_4 (x1, x2) (a3, a6, a4, a1) -> a5
  | (x1, x2) when match_2_to_4 (x1, x2) (a4, a5, a3, a2) -> a6
  | _ -> 0 in

  let rec read_task n = 
    if n == 0 then
      ()
    else 
      Scanf.scanf "%d %d\n" (fun x1 x2 -> begin
        Printf.printf "%d\n" (solve (x1, x2));
        read_task (n - 1)
      end) in

  read_task n in

Scanf.scanf "%d %d %d %d %d %d\n%d\n" read_tasks;
