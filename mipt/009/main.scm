(define v1 0)
(define v2 1)
(define n (read))

(define (next-fib)
  (let ((tmp v1))
    (set! v1 v2)
    (set! v2 (+ tmp v2))))

(if (or (= n 0) (= n 1))
    (display 1)
    (let ((i 1))
      (do ((i 1 (+ i 1)))
        ((> i n))
        (next-fib))
      (display v2)))
        

