

;
; Complete the 'birthdayCakeCandles' function below.
;
; The function is expected to return an INTEGER.
; The function accepts INTEGER_ARRAY candles as parameter.
;

(defn birthdayCakeCandles [candles]
  (let [h (reduce max candles)] 
    (reduce (fn [acc v] (+ acc (if (= v h) 1 0))) 0 candles)))

(def fptr (get (System/getenv) "OUTPUT_PATH"))

(def candles-count (Integer/parseInt (clojure.string/trim (read-line))))

(def candles (vec (map #(Integer/parseInt %) (clojure.string/split (clojure.string/trimr (read-line)) #" "))))

(def result (birthdayCakeCandles candles))

(spit fptr (str result "\n") :append true)
