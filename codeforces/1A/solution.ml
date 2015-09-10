let one_size: int64 -> int64 -> int64 = fun a b ->
  let open Int64 in
  (add (div a  b) (if (rem a b) > zero then one else zero));;

let solve n m a =
  let open Int64 in
  (mul (one_size n a)  (one_size m a)) in
  Printf.printf "%Li" (Scanf.scanf "%Li %Li %Li\n" solve);;
