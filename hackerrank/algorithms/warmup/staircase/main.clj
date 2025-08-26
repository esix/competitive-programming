

;
; Complete the 'staircase' function below.
;
; The function accepts INTEGER n as parameter.
;

(defn staircase [n]
  (dotimes [i n]
    (println 
      (str 
        (apply str (repeat (- n i 1) \space)) 
        (apply str (repeat (+ i 1) \#)))))
)

(def n (Integer/parseInt (clojure.string/trim (read-line))))

(staircase n)
