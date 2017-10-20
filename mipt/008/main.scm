(define s (read-line))

(define len (string-length s))


(define counter 0)
(define fail #f)


(define (process-open-bracket)
  (set! counter (+ counter 1)))

(define (process-close-bracket)
  (set! counter (- counter 1))
  (if (< counter 0)
      (set! fail #t)))

(do ((i 0 (+ 1 i)))
  ((>= i len))
  (let ((c (string-ref s i)))
    (cond
      [(char=? #\( c) (process-open-bracket)]
      [(char=? #\) c) (process-close-bracket)]
      [#t (set! fail #t)])))

(display
 (if (and (= counter 0) (not fail))
     "YES"
     "NO"))