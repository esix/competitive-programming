;
; Complete the 'aVeryBigSum' function below.
;
; The function is expected to return a LONG_INTEGER.
; The function accepts LONG_INTEGER_ARRAY ar as parameter.
;

(defn aVeryBigSum [ar]
  (reduce + ar))

(def fptr (get (System/getenv) "OUTPUT_PATH"))

(def ar-count (Integer/parseInt (clojure.string/trim (read-line))))

(def ar (vec (map #(Long/parseLong %) (clojure.string/split (clojure.string/trimr (read-line)) #" "))))

(def result (aVeryBigSum ar))

(spit fptr (str result "\n") :append true)
