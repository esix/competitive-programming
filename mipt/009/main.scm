(define cache (make-hash-table))

(define (fib* n)
  (let ((cached (hash-table-get cache n null)))
    (if (eq? cached null)
        (let ((val (+ (fib (- n 1)) (fib (- n 2)))))
         (hash-table-put! cache n val)
          val)
        cached)))

(define (fib n)
    (if (or (= n 0) (= n 1))
        1
        (fib* n)))

(define n (read))
(display (fib n))