Scanf.scanf "%i %i %i\n" (fun a b c ->
  if a < b && b < c then print_endline "Yes"
  else print_endline "No"
)