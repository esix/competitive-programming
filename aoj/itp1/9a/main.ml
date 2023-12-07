let count_contains s1 s2 = 
  begin
    let result = ref 0 in
    let len1 = String.length s1 in
    let len2 = String.length s2 in
    let i = ref 0 in
    while !i <= len1 - len2 do
      if (String.sub s1 !i len2 = s2) &&
         ((!i = 0) || String.sub s1 (!i - 1) 1 = " " )  &&
         ((!i = len1 - len2) || String.sub s1 (!i + len2) 1 = " " )
      then 
        result := !result + 1;
      i := !i + 1;
    done;
    !result
  end;;

let w = read_line ();;
let p = ref (read_line ());;
let result = ref 0;;

while !p <> "END_OF_TEXT" do
  result := !result + count_contains (String.lowercase !p) (String.lowercase w);
  p := read_line ();
done;;

Printf.printf "%i\n" !result;;
