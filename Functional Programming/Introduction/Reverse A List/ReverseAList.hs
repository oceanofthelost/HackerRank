rev :: [a] -> [a]
rev [] = []
rev l = last l : rev (init l)
main = do
		inputdata <- getContents
		mapM_ putStrLn $ map show $ rev $ map (read :: String -> Int) $ lines inputdata


