let call n = 
  for i = 1 to n do 
    if i mod 3 == 0 then 
      Printf.printf " %i" i
    else
      let rec include3 x = 
        if x mod 10 == 3 then 
          Printf.printf " %i" i
        else 
          if x / 10 != 0 then include3 (x / 10) 
        in
      include3 i;
  done in
Scanf.scanf "%i\n" call
