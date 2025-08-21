

;
; Complete the 'timeConversion' function below.
;
; The function is expected to return a STRING.
; The function accepts STRING s as parameter.
;

(defn timeConversion [s]
  (let [[[_ hh mm ss n]] (re-seq #"^^(\d\d):(\d\d):(\d\d)(AM|PM)$" s)]
    (format "%02d:%s:%s"
      (+ (mod (Integer. hh) 12) (if (= n "PM") 12 0))
      mm
      ss)))

(def fptr (get (System/getenv) "OUTPUT_PATH"))

(def s (read-line))

(def result (timeConversion s))

(spit fptr (str result "\n") :append true)
