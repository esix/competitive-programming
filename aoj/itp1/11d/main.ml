let get_digit c = int_of_char c - int_of_char '0';;

let rotations = [| 
    "012345"; "024135"; "031425"; "043215"; "103254"; "120534"; "135024"; "152304"; "201453"; "215043"; "240513"; "254103";
    "304152"; "310542"; "345012"; "351402"; "402351"; "425031"; "430521"; "453201"; "513240"; "521430"; "534120"; "542310"
  |];;

let rotate a rotation =
  let sides = Array.init 6 (fun i -> a.(get_digit rotation.[i])) in
  Array.fold_left (fun acc d -> Int64.add (Int64.mul acc 100L) (Int64.of_int d)) 1L sides;;

let find a i =
  let rec find a i n =
    if a.(n)=i then true
    else find a i (n+1)
  in
  try 
    find a i 0
  with _ -> false
;;

let solve n = 
  let result = ref true in
  let dices = Array.make n Int64.zero in
  for i = 0 to n - 1 do
    let a = Scanf.scanf "%d %d %d %d %d %d\n" (fun a1 a2 a3 a4 a5 a6 -> [|a1; a2; a3; a4; a5; a6|]) in 
    let d = ref Int64.zero in

    for j = 0 to Array.length rotations - 1 do
      let r = rotate a rotations.(j) in
      let cmp = Int64.compare r !d in
      if cmp = 1 then
        d := r;
    done;

    if  find dices !d then
      result := false;

    dices.(i) <- !d;
  done;
  Printf.printf "%s\n" (if !result then "Yes" else "No");;

Scanf.scanf "%d\n" solve
