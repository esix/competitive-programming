

;
; Complete the 'happyLadybugs' function below.
;
; The function is expected to return a STRING.
; The function accepts STRING b as parameter.
;
(defn has-same-neighbors? [s]
  (let [n (count s)]
    (if (<= n 1)
        false
        (and
             (= (nth s 0) (nth s 1))
             (= (nth s (- n 1)) (nth s (- n 2)))
             (every? identity
                     (for [i (range 1 (- n 1))]
                       (or
                        (= (nth s i) (nth s (dec i)))
                        (= (nth s i) (nth s (inc i))))))))))

(defn happyLadybugs [b]
  (let [num-of-met (int-array 31 0)
        char-to-num (fn [c] (- (int c) (int \A)))]

    (doseq [c b]
      (aset num-of-met 
        (char-to-num c)
        (inc (aget num-of-met (char-to-num c)))))
        
    (let [arr (java.util.Arrays/copyOfRange num-of-met 0 30)
          no-free-place? (= 0 (aget num-of-met (char-to-num \_)))
          arr-non-zeroes (filter (fn [n] (not (zero? n))) arr)
          more-then-one-color? (> (count arr-non-zeroes) 1)]
      (if (and no-free-place? more-then-one-color? (not (has-same-neighbors? b)))
          "NO"
          (if (every? 
              (fn [v] (not= v 1))  
              arr)
            "YES"
            "NO")))))

(def fptr (get (System/getenv) "OUTPUT_PATH"))

(def g (Integer/parseInt (clojure.string/trim (read-line))))

(doseq [g-itr (range g)]
    (def n (Integer/parseInt (clojure.string/trim (read-line))))

    (def b (read-line))

    (def result (happyLadybugs b))

    (spit fptr (str result "\n") :append true)
)
