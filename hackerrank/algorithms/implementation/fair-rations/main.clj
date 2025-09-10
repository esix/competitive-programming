

;
; Complete the 'fairRations' function below.
;
; The function is expected to return a STRING.
; The function accepts INTEGER_ARRAY B as parameter.
;

(defn fairRations [B]
  (loop [i 0
         acc 0
         parity 0]
    (let [last? (= i (dec (count B)))
          e (nth B i)
          e-is-even? (even? e)
          parity-is-even? (even? parity)
          same-parity? (= e-is-even? parity-is-even?)]
      (cond 
        last? (if same-parity? (str (* 2 acc)) "NO")
        e-is-even? (recur (inc i) (+ acc parity) parity)
        :else (recur (inc i) (+ acc (- 1 parity)) (- 1 parity))
    )))
)

(def fptr (get (System/getenv) "OUTPUT_PATH"))

(def N (Integer/parseInt (clojure.string/trim (read-line))))

(def B (vec (map #(Integer/parseInt %) (clojure.string/split (clojure.string/trimr (read-line)) #" "))))

(def result (fairRations B))

(spit fptr (str result "\n") :append true)
