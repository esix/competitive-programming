let t = read_int() in
let s = t mod 60 in
let m = t / 60 in
let h = m / 60 in
let m = m mod 60 in
Printf.printf "%d:%d:%d\n" h m s;
