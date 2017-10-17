;;; A001400	

(define (sum lower upper f)
  (if (> lower upper)
      0
      (+ (f lower) (sum (+ 1 lower) upper f))))


(define (c-formula n i)
  (+ 1 (ceiling (/ (- n (* 3 i) 1) 2))))


(define (c n)
  (sum 0
       (floor (/ n 3))
       (lambda (i) (c-formula n i))))


(define (a-formula n i)
  (+ 1 (ceiling (/ (- n (* 4 i) 1) 2)) (c (- n (* 4 i) 3))))


(define (a n)
  (sum 0
       (floor (/ n 4))
       (lambda (i) (a-formula n i))))


(define n (read))

(display (a n))
