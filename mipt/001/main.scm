#lang swindle

(let ((max-value null)
      (v null))
  (while (not (eof-object? (begin
                             (set! v (read))
                             v)))
         (if (equal? max-value null)
            (set! max-value v)
            (set! max-value (max v max-value))))
  (display max-value))