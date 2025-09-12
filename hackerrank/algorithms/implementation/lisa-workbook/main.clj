

;
; Complete the 'workbook' function below.
;
; The function is expected to return an INTEGER.
; The function accepts following parameters:
;  1. INTEGER n
;  2. INTEGER k
;  3. INTEGER_ARRAY arr
;

(defn workbook [n k arr]
  (loop [arr arr
         page 1
         result 0]
    (if (empty? arr)
      result
      (let [count (first arr)
            pages (for [start (range 1 (inc count) k)]
                    (let [end (min count (+ start k -1))]
                      [start end]))
            [new-page new-result] (reduce (fn [[pg res] [start end]]
                                            [(inc pg)
                                             (if (<= start pg end)
                                               (inc res)
                                               res)])
                                          [page result]
                                          pages)]
        (recur (rest arr) new-page new-result)))))


(def fptr (get (System/getenv) "OUTPUT_PATH"))

(def first-multiple-input (clojure.string/split (clojure.string/trimr (read-line)) #" "))

(def n (Integer/parseInt (nth first-multiple-input 0)))

(def k (Integer/parseInt (nth first-multiple-input 1)))

(def arr (vec (map #(Integer/parseInt %) (clojure.string/split (clojure.string/trimr (read-line)) #" "))))

(def result (workbook n k arr))

(spit fptr (str result "\n") :append true)
