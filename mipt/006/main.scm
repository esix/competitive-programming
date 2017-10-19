(define n (read))


(define (formula i j)
  (* i (+ (* 8 j) 7)))

(define result 0)

  
(do ((i 1 (* i 4)))
  ((> i n))
  (do ((j 1 (+ 1 j))
       (next-num (formula i 0) (formula i j)))
    ((> next-num n))
  (set! result (+ 1 result))))
     
(display result)
