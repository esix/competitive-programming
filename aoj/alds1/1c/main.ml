let make_sieve () = 
  let numbers = Array.make 10000 true in
  for i = 2 to 9999 do
    if numbers.(i) then
      let j = ref (i + i) in
      while !j < 10000 do 
        numbers.(!j) <- false ;
        j := !j + i;
      done
  done ;
  numbers
in
  
let make_primes () = 
  let sieve = make_sieve () in
  let rec aux lst j = match j with
  | j when j = 10000 -> lst
  | j when sieve.(j) -> aux (j::lst) (j + 1)
  | _ -> aux lst (j + 1) in
  List.rev (aux [] 2)
in 

let primes = make_primes () in

let check_prime n = 
  let rec aux lst = 
    match lst with
    | [] -> 1
    | p :: t when p = n -> 1
    | p :: t when p * p > n -> 1
    | p :: t when n mod p = 0 -> 0
    | _ :: t -> aux t in 
  aux primes in

let read_and_check n = 
  let rec aux i = 
    if i = n then
      0
    else
      Scanf.scanf "%d\n" (fun v ->
          (check_prime v) + aux (i + 1))
  in
    aux 0 in

Printf.printf "%d\n" (Scanf.scanf "%d\n" read_and_check)
