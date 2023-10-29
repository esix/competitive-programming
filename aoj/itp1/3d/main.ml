Scanf.scanf "%i %i %i\n" (fun a b c ->
  let result = ref 0 in begin
    for i = a to b do
      if c mod i == 0 then result := 1 + !result
    done;
    print_int !result;
    print_endline "";
  end)
