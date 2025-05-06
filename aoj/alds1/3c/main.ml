type 'a node = {
  mutable prev : 'a node option;
  mutable next : 'a node option;
  value : 'a
}

type 'a dllist = {
  mutable head : 'a node option;
  mutable tail : 'a node option
}

let create () = { head = None; tail = None }

let insert list x =
  let new_node = { prev = None; next = list.head; value = x } in
  match list.head with
  | Some old_head -> 
      old_head.prev <- Some new_node;
      list.head <- Some new_node
  | None ->
      list.head <- Some new_node;
      list.tail <- Some new_node

let rec delete_node node list =
  match (node.prev, node.next) with
  | (None, None) -> (* Only node in list *)
      list.head <- None;
      list.tail <- None
  | (None, Some next_node) -> (* First node *)
      next_node.prev <- None;
      list.head <- Some next_node
  | (Some prev_node, None) -> (* Last node *)
      prev_node.next <- None;
      list.tail <- Some prev_node
  | (Some prev_node, Some next_node) -> (* Middle node *)
      prev_node.next <- node.next;
      next_node.prev <- node.prev

let delete list x =
  let rec search_node = function
    | None -> None
    | Some node when node.value = x -> Some node
    | Some node -> search_node node.next
  in
  match search_node list.head with
  | Some node -> delete_node node list
  | None -> ()

let deleteFirst list =
  match list.head with
  | None -> ()
  | Some node -> delete_node node list

let deleteLast list =
  match list.tail with
  | None -> ()
  | Some node -> delete_node node list

let to_list dllist =
  let rec aux acc = function
    | None -> List.rev acc
    | Some node -> aux (node.value :: acc) node.next
  in
  aux [] dllist.head;;


let lst = create () in
let n = Scanf.scanf " %d " (fun n -> n) in
for i = 1 to n do
    Scanf.scanf " %s" (fun cmd ->
      match cmd with
      | "insert" -> Scanf.scanf " %d" (insert lst)
      | "delete" -> Scanf.scanf " %d" (delete lst)
      | "deleteFirst" -> deleteFirst lst
      | "deleteLast" -> deleteLast lst
      | _ -> failwith ("Unknown command: " ^ cmd))
done;

let rec print = function
  | None -> ()
  | Some n -> 
      Printf.printf "%d" n.value;
      match n.next with
      | Some n' -> print_string " "; print (Some n')
      | None -> ()
in
  print lst.head;;

print_newline ()
