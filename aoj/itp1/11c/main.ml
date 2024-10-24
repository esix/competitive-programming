let get_digit c = int_of_char c - int_of_char '0';;

exception Found;;
exception Not_Found;;

let is_fit a b rotation =
  try
    for i = 0 to 5 do
      if a.(i) != b.(get_digit rotation.[i]) then
        raise Not_Found
    done;
    true
  with  Not_Found -> false;;


let solve a1 a2 a3 a4 a5 a6 b1 b2 b3 b4 b5 b6 =
  let a = [|a1; a2; a3; a4; a5; a6|] in
  let b = [|b1; b2; b3; b4; b5; b6|] in
  let rotations = [| 
    "012345"; "024135"; "031425"; "043215"; "103254"; "120534"; "135024"; "152304"; "201453"; "215043"; "240513"; "254103";
    "304152"; "310542"; "345012"; "351402"; "402351"; "425031"; "430521"; "453201"; "513240"; "521430"; "534120"; "542310"
  |] in
  try 
    for i = 0 to (Array.length rotations) - 1 do
      if (is_fit a b rotations.(i)) then 
        raise Found
    done;
    Printf.printf "No\n"
  with Found -> Printf.printf "Yes\n";;

Scanf.scanf "%d %d %d %d %d %d\n%d %d %d %d %d %d" solve;
