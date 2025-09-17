

;
; Complete the 'howManyGames' function below.
;
; The function is expected to return an INTEGER.
; The function accepts following parameters:
;  1. INTEGER p
;  2. INTEGER d
;  3. INTEGER m
;  4. INTEGER s
;

(defn howManyGames [p d m s]
  (let [solve-square-equation (fn [a, b, c]
                                  (let [D (- (* b b) (* 4 a c))]   
                                       (/ (- 0 b (Math/sqrt D)) (* 2 a))))
        n (inc (quot (- p m) d))
        cost-reducing (quot (* n (- (* 2 p) (* d (dec n)))) 2)] 
    (if (<= s cost-reducing)
        (int (solve-square-equation (/ d 2) (- 0 p (/ d 2)) s))
        (+ n (quot (- s cost-reducing) m))))
)

(def fptr (get (System/getenv) "OUTPUT_PATH"))

(def first-multiple-input (clojure.string/split (clojure.string/trimr (read-line)) #" "))

(def p (Integer/parseInt (nth first-multiple-input 0)))

(def d (Integer/parseInt (nth first-multiple-input 1)))

(def m (Integer/parseInt (nth first-multiple-input 2)))

(def s (Integer/parseInt (nth first-multiple-input 3)))

(def answer (howManyGames p d m s))

(spit fptr (str answer "\n") :append true)
