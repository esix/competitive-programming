let max_sum = 2000;;
let dp = Array.make (max_sum + 1) false;;
dp.(0) <- true;

let n = Scanf.scanf " %d\n" (fun n -> n) in
for _ = 1 to n do
  let a = Scanf.scanf "%d " (fun x -> x) in
    for s = max_sum - a downto 0 do
      if dp.(s) then
        dp.(s + a) <- true
    done
done;


let q = Scanf.scanf " %d\n" (fun q -> q) in
for _ = 1 to q do
  let m = Scanf.scanf "%d " (fun x -> x) in
  if m <= max_sum && dp.(m) then
    Printf.printf "yes\n"
  else
    Printf.printf "no\n"
done
