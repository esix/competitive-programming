;;;
;;; Fails with "Memory limit" on test 2
;;;

(define ht (make-hash-table))
(define has-result #f)
(define v null)

(define (hash-table-has? ht v)
  (not (eq? (hash-table-get ht v null) null)))

(while (not (= -1 (begin (set! v (read)) v)))
       (hash-table-put! ht v #t))

(while (not (= -1 (begin (set! v (read)) v)))
       (when (hash-table-has? ht v)
         (hash-table-remove! ht v)
         (set! has-result #t)
         (display v)
         (display " ")))

(if (not has-result)
    (display "empty"))