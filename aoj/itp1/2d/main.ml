Scanf.scanf "%i %i %i % i %i\n" (fun w h x y r ->
  if 0 <= x - r && x + r <= w && 0 <= y - r && y + r <= h then print_endline "Yes"
  else print_endline "No"
)