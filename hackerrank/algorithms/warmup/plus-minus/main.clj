

;
; Complete the 'plusMinus' function below.
;
; The function accepts INTEGER_ARRAY arr as parameter.
;


(def n (Integer/parseInt (clojure.string/trim (read-line))))

(defn update-counts [[pos neg zero] x]
  (if (> x 1e-4) 
      [(inc pos) neg zero]
       (if (< x -1e-4) 
            [pos (inc neg) zero]
            [pos neg (inc zero)])))

(defn plusMinus [arr]
  (let [[pos neg zero] (reduce update-counts [0 0 0] arr)]
    (println (format "%.6f" (double (/ pos n))))
    (println (format "%.6f" (double (/ neg n))))
    (println (format "%.6f" (double (/ zero n))))))


(def arr (vec (map #(Integer/parseInt %) (clojure.string/split (clojure.string/trimr (read-line)) #" "))))

(plusMinus arr)
