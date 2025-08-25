

;
; Complete the 'miniMaxSum' function below.
;
; The function accepts INTEGER_ARRAY arr as parameter.
;

(defn miniMaxSum [arr]
 (let [s (reduce + arr)
        minVal (apply min arr)
        maxVal (apply max arr)]
    (println (- s maxVal) (- s minVal))))
    
(def arr (vec (map #(Integer/parseInt %) (clojure.string/split (clojure.string/trimr (read-line)) #" "))))

(miniMaxSum arr)
