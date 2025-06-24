(* convert 12 letters to number by setting corresponding bits *)
let to_bits s =
  let len = String.length s in
  let rec loop i acc =
    if i = len then acc
    else
      let bits = match s.[i] with
        | 'A' -> 0b00
        | 'C' -> 0b01
        | 'G' -> 0b10
        | 'T' -> 0b11
        | c -> failwith "Invalid character"
      in
      loop (i + 1) ((acc lsl 2) lor bits)
  in
  loop 0 1 in

(* 1048576 ints is enough for 33554431 bits *)  
let bits = Array.make 1048576 Int32.zero in

let set_bit n =
  let index = n lsr 5 in          (* n / 32 *)
  let pos = n land 31 in          (* n mod 32 *)
  let word = Array.get bits index in
  let new_word = Int32.logor word (Int32.shift_left Int32.one pos) in
  Array.set bits index new_word in

let test_bit n =
  let index = n lsr 5 in          (* n / 32 *)
  let pos = n land 31 in          (* n mod 32 *)
  let word = Array.get bits index in
  Int32.logand word (Int32.shift_left Int32.one pos) <> Int32.zero in

(* insert command *)
let insert s = set_bit (to_bits s) in

(* find command *)
let find s = print_string (if test_bit (to_bits s) then "yes\n" else "no\n") in



let n = Scanf.scanf " %d " (fun n -> n) in
for i = 1 to n do
    Scanf.scanf " %s" (fun cmd ->
      match cmd with
      | "insert" -> Scanf.scanf " %s" insert 
      | "find" -> Scanf.scanf " %s" find
      | _ -> failwith ("Unknown command: " ^ cmd))
done

