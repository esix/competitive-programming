Scanf.scanf "%i %i\n" (fun a b ->
  Printf.printf "%i %i %f\n" (a/b) (a mod b) ((float_of_int a) /. (float_of_int b))
)
