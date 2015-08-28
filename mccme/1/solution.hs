main = do
  [a, b] <- (map read . words) `fmap` getLine
  print (a+b)
