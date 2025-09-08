

;
; Complete the 'stones' function below.
;
; The function is expected to return an INTEGER_ARRAY.
; The function accepts following parameters:
;  1. INTEGER n
;  2. INTEGER a
;  3. INTEGER b
;

(defn stones [n a b]
  (cond 
    (= a b) (list (* (dec n) a))
    (< b a) (stones n b a)
    :else 
      (loop [i 0
             acc '()]
        (if (= i n)
          (reverse acc)
          (recur 
            (inc i) 
            (conj 
              acc 
              (+ (* a (- (dec n) i)) (* b i))))))))

(def fptr (get (System/getenv) "OUTPUT_PATH"))

(def T (Integer/parseInt (clojure.string/trim (read-line))))

(doseq [T-itr (range T)]
    (def n (Integer/parseInt (clojure.string/trim (read-line))))

    (def a (Integer/parseInt (clojure.string/trim (read-line))))

    (def b (Integer/parseInt (clojure.string/trim (read-line))))

    (def result (stones n a b))

    (spit fptr (clojure.string/join " " result) :append true)
    (spit fptr "\n" :append true)
)
