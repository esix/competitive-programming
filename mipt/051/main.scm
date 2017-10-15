
(define (square-sum n)
  (/ (* n (+ n 1) (+ (* 2 n) 1)) 6))

(define (fits-in-block? block n)
  (<= n (square-sum block)))


(define (search-block-number-in-range n min max)
  (let ((mid (floor (/ (+ min max) 2))))
    (cond ((= mid min) (if (fits-in-block? min n) min max))
          ((fits-in-block? mid n) (search-block-number-in-range n min mid))
          (#t (search-block-number-in-range n mid max)))))


(define (search-block-number-range n min max)
  (if (fits-in-block? max n)
      (search-block-number-in-range n min max)
      (search-block-number-range n max (* 2 max))))


(define (get-block-number n)
  (search-block-number-range n 1 2))

(define (get-block-floor-number block)
  (+ 1 (/ (* block (- block 1)) 2)))

(define (get-floor-number-in-block block n)
  (let ((rel  (- n (square-sum (- block 1)) 1)))
    (floor (/ rel block))))

  
(define (get-flat-number-in-block block n)
  (let ((rel  (- n (square-sum (- block 1)) 1)))
    (+ 1 (modulo rel block))))


(define n (read))

(define block (get-block-number n))

(define floor-number (+ (get-block-floor-number block)
                        (get-floor-number-in-block block n)))

(define flat-number (get-flat-number-in-block block n))

(display floor-number)
(display " ")
(display flat-number)