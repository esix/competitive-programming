

;
; Complete the 'chocolateFeast' function below.
;
; The function is expected to return an INTEGER.
; The function accepts following parameters:
;  1. INTEGER n
;  2. INTEGER c
;  3. INTEGER m
;

(defn chocolateFeast [n c m]
  (loop [r (quot n c)
         w (quot n c)]
    (if (< w m)
      r
      (recur (+ r (quot w m))
             (+ (quot w m) (rem w m)))))
)

(def fptr (get (System/getenv) "OUTPUT_PATH"))

(def t (Integer/parseInt (clojure.string/trim (read-line))))

(doseq [t-itr (range t)]
    (def first-multiple-input (clojure.string/split (clojure.string/trimr (read-line)) #" "))

    (def n (Integer/parseInt (nth first-multiple-input 0)))

    (def c (Integer/parseInt (nth first-multiple-input 1)))

    (def m (Integer/parseInt (nth first-multiple-input 2)))

    (def result (chocolateFeast n c m))

    (spit fptr (str result "\n") :append true)
)
