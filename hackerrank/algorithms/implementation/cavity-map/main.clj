

;
; Complete the 'cavityMap' function below.
;
; The function is expected to return a STRING_ARRAY.
; The function accepts STRING_ARRAY grid as parameter.
;

(defn cavityMap [grid]
  (let [n (count grid)
        m (count (nth grid 0))
        c (fn [i j] (int (nth (nth grid i) j)))
        process-char (fn [i j] 
                         (if (or 
                                (= i 0) (= j 0) 
                                (= i (dec n)) (= j (dec m))
                                (<= (c i j) (c (dec i) j))
                                (<= (c i j) (c (inc i) j))
                                (<= (c i j) (c i (dec j)))
                                (<= (c i j) (c i (inc j))))
                           (nth (nth grid i) j)
                           \X))
        process-row (fn [i]
                        (apply str (map (fn [j] (process-char i j)) (range m))))]
                        
    (vec 
      (map (fn [i] (process-row i))
           (range n))))
)

(def fptr (get (System/getenv) "OUTPUT_PATH"))

(def n (Integer/parseInt (clojure.string/trim (read-line))))

(def grid [])

(doseq [_ (range n)]
    (def grid (conj grid (read-line)))
)

(def result (cavityMap grid))

(spit fptr (clojure.string/join "\n" result) :append true)
(spit fptr "\n" :append true)
