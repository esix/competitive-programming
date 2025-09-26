

;
; Complete the 'minimumDistances' function below.
;
; The function is expected to return an INTEGER.
; The function accepts INTEGER_ARRAY a as parameter.
;

(defn minimumDistances [a]
  (loop [i 0
         h {}
         min-dist ##Inf]
    (if (< i (count a))
      (let [el (nth a i)]
        (if-let [prev-idx (h el)]
          (recur (inc i) (assoc h el i) (min min-dist (- i prev-idx)))
          (recur (inc i) (assoc h el i) min-dist)))
      (if (Double/isFinite min-dist) min-dist -1))))


(def fptr (get (System/getenv) "OUTPUT_PATH"))

(def n (Integer/parseInt (clojure.string/trim (read-line))))

(def a (vec (map #(Integer/parseInt %) (clojure.string/split (clojure.string/trimr (read-line)) #" "))))

(def result (minimumDistances a))

(spit fptr (str result "\n") :append true)
