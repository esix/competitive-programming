

; Complete the flatlandSpaceStations function below.
(defn flatlandSpaceStations [n c]
  (let [c (sort c)
        num-of-c (count c)                                  ;; length of c
        absdelta (fn [a b] (Math/abs (- a b)))              ;; |a - b|
        inc-c-index (fn [idx] (if (< idx (dec num-of-c)) (inc idx) idx))]   ;; increase index of c if possible
    (loop [i 0
          acc 0
          nearest-station-index 0]
      ;; (printf "i=%d nearest-station-index=%d num-of-c=%d\n" i nearest-station-index num-of-c)
      ;; (flush)
      (if (= i n)
          acc
          (let [dist-to-nearest-station (absdelta (nth c nearest-station-index) i)
                another-nearest-station-index (inc-c-index nearest-station-index)
                dist-to-another-nearest-station (absdelta i (nth c another-nearest-station-index))
                best-nearest-station-index (if (< dist-to-nearest-station dist-to-another-nearest-station) nearest-station-index another-nearest-station-index)
                best-distance (absdelta (nth c best-nearest-station-index) i)
              ]
            (recur (inc i) (max acc best-distance) best-nearest-station-index)))
    )))

(def fptr (get (System/getenv) "OUTPUT_PATH"))

(def nm (clojure.string/split (read-line) #" "))

(def n (Integer/parseInt (clojure.string/trim (nth nm 0))))

(def m (Integer/parseInt (clojure.string/trim (nth nm 1))))

(def c (vec (map #(Integer/parseInt %) (clojure.string/split (read-line) #" "))))

(def result (flatlandSpaceStations n c))

(spit fptr (str result "\n") :append true)
