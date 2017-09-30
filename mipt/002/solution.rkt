(define ht (make-hash))
(define has-result #F)
(define v null)

(let ((max-value null)
  (while (not (= -1 (begin
                             (set! v (read))
                             v)))
                             
  
         (if (equal? max-value null)
            (set! max-value v)
            (set! max-value (max v max-value))))
  (display max-value))