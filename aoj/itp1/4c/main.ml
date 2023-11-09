let rec loop i =
  Scanf.scanf "%i %c %i\n" (fun a op b -> 
    if op = '?' then () else 
    begin
      let r = match op with
      | '+' -> a + b
      | '-' -> a - b
      | '*' -> a * b
      | '/' -> a / b 
      | _ -> 0   in 
        Printf.printf "%i\n" r;
      loop (i + 1)
    end
  )
in
  loop 0
