
;
; Complete the 'strangeCounter' function below.
;
; The function is expected to return a LONG_INTEGER.
; The function accepts LONG_INTEGER t as parameter.
;

(defn strangeCounter [t]
  (loop [first-time 1
         last-time 3
         first-value 3
         last-value 1]
    (if (<= first-time t last-time)
      (- first-value (- t first-time))
      (recur (inc last-time)
             (+ last-time (* 2 first-value))
             (* 2 first-value)
             1))))


(def fptr (get (System/getenv) "OUTPUT_PATH"))

(def t (Long/parseLong (clojure.string/trim (read-line))))

(def result (strangeCounter t))

(spit fptr (str result "\n") :append true)
