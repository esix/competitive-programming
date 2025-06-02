type my_struct = {
  x : int;
  w : int;
};;

let holes : my_struct list ref = ref [];;

let merge_holes x to_x =
  let rec remove_and_sum acc = function
    | [] -> (acc, []) 
    | hd :: tl ->
        if hd.x > x then
          remove_and_sum (acc + hd.w) tl
        else
          (acc, hd :: tl)
  in
  let (sum, remaining) = remove_and_sum 0 !holes in
  holes := { x; w = sum + (to_x - x)} :: remaining 
;;


let prev_x = Array.make 40_000 (-1);;      (* x of previous  \ symbol *)

let y = ref (20000);;     (* center *)

let move_down x = begin 
  prev_x.(!y) <- x;
  y := !y - 1;
end;;

let move_up x = begin 
  y := !y + 1;
  if prev_x.(!y) <> -1 then 
    merge_holes prev_x.(!y) x;
end;;

let line = read_line () in
for i = 0 to String.length line - 1 do
  let c = String.get line i in
  match c with
  | '\\' -> move_down i;
  | '/' -> move_up i;
  | _ -> ()
done;

let ws = List.rev_map (fun {w;_} -> w) !holes in
Printf.printf "%d\n%d" (List.fold_left (+) 0 ws) (List.length ws);
List.iter (Printf.printf " %d") ws;
print_newline ()
