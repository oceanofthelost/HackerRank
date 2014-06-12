f :: [Int] -> [Int]
f lst = [i | (i,c) <- (zip lst [1,2..]),even c]

-- This part deals with the Input and Output and can be used as it is. Do not modify it.
main = do
   inputdata <- getContents
   mapM_ putStrLn $ map show $ f $ map (read :: String -> Int) $ lines inputdata
