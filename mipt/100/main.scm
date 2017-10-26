(define n (read))

(define nim-summ 0)

(do ((i 1 (+ 1 i)))
  ((> i n))
  (let ((v (read)))
    (set! nim-summ (bitwise-xor nim-summ v))))


(display 
    (if (= 0 nim-summ)
        "Second wins."
        "First wins."))
