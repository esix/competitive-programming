

;
; Complete the 'serviceLane' function below.
;
; The function is expected to return an INTEGER_ARRAY.
; The function accepts following parameters:
;  1. INTEGER n
;  2. INTEGER_AWWAR width
;  3. 2D_INTEGER_ARRAY cases
;

(defn serviceLane [n width cases]
  (map 
    (fn [[i j]] 
      (loop [x (inc i)
            result (nth width i)]
        (if (> x j) 
            result
            (recur (inc x) (min result (nth width x)))))) 
    cases))

(def fptr (get (System/getenv) "OUTPUT_PATH"))

(def first-multiple-input (clojure.string/split (clojure.string/trimr (read-line)) #" "))

(def n (Integer/parseInt (nth first-multiple-input 0)))

(def t (Integer/parseInt (nth first-multiple-input 1)))

(def width (vec (map #(Integer/parseInt %) (clojure.string/split (clojure.string/trimr (read-line)) #" "))))

(def cases [])

(doseq [_ (range t)]
    (def cases (conj cases (vec (map #(Integer/parseInt %) (clojure.string/split (clojure.string/trimr (read-line)) #" ")))))
)

(def result (serviceLane n width cases))

(spit fptr (clojure.string/join "\n" result) :append true)
(spit fptr "\n" :append true)
