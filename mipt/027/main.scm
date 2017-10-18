(define (call-n-times n proc)
  (let loop ((n n))
    (unless (zero? n)
      (proc)
      (loop (- n 1)))))

(define n (read))
(define result 0)

(call-n-times n (lambda () (set! result (bitwise-xor result (read)))))

(display result)