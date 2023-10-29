Scanf.scanf "%i %i\n" (fun a b ->
  if a < b then print_endline "a < b"
  else if a > b then print_endline "a > b"
  else print_endline "a == b"
)