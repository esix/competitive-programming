type node = {
  mutable name: string;
  mutable time: int;
  mutable next: node option;
}

type circular_list = node option ref

let create () : circular_list = ref None

let is_empty (cl : circular_list) : bool = 
  !cl = None

let make_node name time = 
  let rec new_node = { name; time; next = None } in
  new_node.next <- Some new_node; (* circular ref on self *)
  new_node

let insert_after (cl : circular_list) name time =
  match !cl with
  | None -> 
      (* if list is empty make it head *)
      cl := Some (make_node name time)
  | Some current_node ->
      let new_node = { name; time; next = current_node.next } in
      current_node.next <- Some new_node

let set_values (cl : circular_list) new_name new_time =
  match !cl with
  | None -> failwith "Empty list"
  | Some node -> 
      node.name <- new_name;
      node.time <- new_time

let get_values (cl : circular_list) =
  match !cl with
  | None -> failwith "Empty list"
  | Some node -> (node.name, node.time)

let next (cl : circular_list) =
  match !cl with
  | None -> failwith "Empty list"
  | Some node -> 
      match node.next with
      | None -> failwith "Invalid circular list"
      | Some next_node -> cl := Some next_node

let remove_current (cl : circular_list) =
  match !cl with
  | None -> ()
  | Some current ->
      match current.next with
      | None -> ()
      | Some next when next == current -> cl := None
      | Some next ->
          let rec find_prev target (node : node) =
            match node.next with
            | Some n when n == target -> node
            | Some n -> find_prev target n
            | None -> failwith "Broken circular list"
          in
          let prev = find_prev current next in
          prev.next <- current.next;
          cl := current.next

let lst = create ()

let (n, q) = Scanf.scanf " %d %d " (fun n q -> (n, q));;

let t = ref 0 ;;

let qq = ref q ;;

for i = 1 to n do 
  Scanf.scanf "%s %d " (fun name time -> 
    if time <= q then
      begin
        t := !t + time;
        Printf.printf "%s %d\n" name !t;
      end
    else
      begin 
        t := !t + q;
        insert_after lst name (time - q);
        next lst;
      end)
done;;

if not (is_empty lst) then
  next lst;;


while not (is_empty lst) do
  let (name, time) = get_values lst in
  if time <= q then
    begin
      t := !t + time;
      remove_current lst;
      Printf.printf "%s %d\n" name !t;
    end
  else
    begin
      t := !t + q;
      set_values lst name (time - q);
      next lst;
    end;
done

(*
ocamlc main.ml && time cat in.txt | ./a.out > /dev/null
*)