factorial :: Integer -> Integer
factorial 0 = 1
factorial n = n * factorial (n-1)


inverse ::Fractional a=> Integer -> a
inverse n = 1.0/ fromInteger n

power :: Double -> [Double]
power x = [i**c| (i,c) <- zip (replicate 9 x) [1,2..]]

solve :: Double -> Double
solve n = foldl (+) 1 $ zipWith (*) (map (inverse) (map (factorial) [1..9]))(power n)
